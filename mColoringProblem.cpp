#include <iostream>
#define V 4 // defining vertices of graph
using namespace std;

void printSolution(int color[])
{
    cout<<"Solution is "<<endl;
    for (int i = 0; i < V; i++)
        cout << color[i] << " ";

    cout << endl;
}

bool isSafe(int graph[V][V], int color[V], int c, int v)
{
    for (int i = 0; i < V; i++)
    {
        if (graph[v][i] == 1 && c == color[i])   // showing connectivity between vertices and finding color of the connected vertice is same or not
        {
            return false;
        }
    }
    return true;
}

bool graphColoringUtil(int graph[V][V], int m, int color[V], int v)
{
    if (v == V)
    {
        return true;
    }

    for (int c = 1; c <= m; c++)
    {
        if (isSafe(graph, color, c, v))
        {
            color[v] = c;
            if (graphColoringUtil(graph, m, color, v + 1) == true)
            {
                return true;
            }
            color[v] = 0;
        }
    }
    return false;
}

bool graphColoring(int graph[V][V], int m)
{
    int color[V] = {0};
    if (graphColoringUtil(graph, m, color, 0) == false)
    {
        cout << "Solution not exist " << endl;
        return false;
    }
    printSolution(color);
    return true;
}

int main()
{
    int m;
    cout << "Enter the no. of colors to be filled " << endl;
    cin >> m;
    int graph[V][V];
    cout << "Enter the binary values in 2d matrix " << endl;
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> graph[i][j];
        }
    }

    graphColoring(graph, m);
    return 0;
}