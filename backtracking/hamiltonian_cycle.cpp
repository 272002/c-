#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> g(10);
vector<int> path;
bool visited[10];

bool ishamiltonian()
{
    int first = path[0];
    int last = path[path.size() - 1];
    for (int i = 0; i < g[last].size(); i++)
    {
        if (g[last][i] == first)
        {
            return true;
        }
    }
    return false;
}

void hamiltonianCycle(int u, int n)
{
    visited[u] = true;
    path.push_back(u);
    if (path.size() == n)
    {
        if (ishamiltonian())
        {
            cout<<"Path is "<<endl;
            for (int i = 0; i < path.size(); i++)
            {
                cout << path[i] << " ";
            }
        }
        else
        {
            cout << "NOT POSSIBLE " << endl;
        }
    }
    else
    {
        for (int i = 0; i < g[u].size(); i++)
        {
            int v = g[u][i];
            if (!visited[v])
            {
                hamiltonianCycle(v, n);
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter no of vertices " << endl;
    cin >> n;
    cout << "Enter " << endl;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // find Hamiltonian cycle
    hamiltonianCycle(1, n);
    return 0;
}