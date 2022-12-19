#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Graph
{
public:
    map<int,bool> visited;
    map<int,list<int>> adj;
    void addEdge(int v,int w)
    {
       adj[v].push_back(w);
       adj[w].push_back(v);
    }
    void DST(int v)
    {
        visited[v]=true;
        cout<<v<<" ";
        list<int>:: iterator it;
        for(it=adj[v].begin();it!=adj[v].end();it++)
        {
            if(!visited[*it])
                DST(*it);
        }
    }
};
int main()
{
    Graph g1;
    g1.addEdge(1,2);
    g1.addEdge(2,3);
    g1.addEdge(3,4);
    g1.addEdge(4,5);
    g1.addEdge(4,6);
    g1.addEdge(5,7);
    g1.addEdge(7,8);
    g1.DST(2);
    return 0;
}
