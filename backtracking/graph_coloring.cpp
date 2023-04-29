#include <iostream>
#include <vector>
using namespace std;

bool graph_color_safe_valid(vector<vector<int>> graph, vector<int> colored, int node, int i)
{
    for (int neighbour : graph[node])
    {
        if (colored[neighbour] == i)
        {
            return false;
        }
    }
    return true;
}

bool graph_coloring_possible(vector<vector<int>> graph, int num_colors, vector<int> &colored, int node)
{
    if (node == graph.size())
    {
        return true;
    }

    for (int i = 1; i <= num_colors; i++)
    {
        if (graph_color_safe_valid(graph, colored, node, i))
        {
            colored[node] = i;
            if (graph_coloring_possible(graph, num_colors, colored, node + 1))
            {
                return true;
            }
            colored[node] = 0;
        }
    }
    return false;
}

int main()
{
    int num_colors, vertices, edges;
    
    cout << "Enter number of vertices and edges " << endl;
    cin >> vertices >> edges;
    vector<vector<int>> graph(vertices);
    cout<<"Enter elements in a graph "<<endl;
    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    cout << "Enter no. of colors " << endl;
    cin >> num_colors;

    vector<int> colored(graph.size(), 0);
    if (graph_coloring_possible(graph, num_colors, colored, 0))
    {
        cout << "Solution Possible " << endl;
        for (int i = 0; i < graph.size(); i++)
        {
            cout << colored[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Not possible " << endl;
    }
}