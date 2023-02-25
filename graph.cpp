#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{

    public:
    unordered_map<int,list<int>> adj;
    void createEdge(int u,int v, bool direction){
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // creating an edge
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void displayEdge(){
        for (auto i:adj)
        {
            cout<<i.first<<" -> ";
            for (auto j: i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
        
    }
};

int main(){
    int n;
    cout<<"Enter number of nodes "<<endl;
    cin>>n;

    int m;
    cout<<"Enter number of edges "<<endl;
    cin>>m;

    graph g;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        g.createEdge(u,v,0);
    }
    
    g.displayEdge();

}