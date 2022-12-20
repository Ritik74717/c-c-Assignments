#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Graph
{
public:
    int V;
    vector<list<int>> adj;
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);

    }
    void addEdge(int u,int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void BFS(int s)
    {
        vector<bool> visited;
        visited.resize(V,false);

        list<int> q;
        visited[s]=true;
        q.push_back(s);
        while(!q.empty())
        {
            s=q.front();
            cout<<s<<" ";
            q.pop_front();

            for(auto adjacent: adj[s])
            {
                if(!visited[adjacent])
                {
                    visited[adjacent]=true;
                    q.push_back(adjacent);
                }
            }
        }
    }
};

int main()
{
    Graph g1(4);
    g1.addEdge(0,1);
    g1.addEdge(0,2);
    g1.addEdge(1,2);
    g1.addEdge(2,0);
    g1.addEdge(2,3);
    g1.addEdge(3,3);
    g1.BFS(2);
    return 0;
}
