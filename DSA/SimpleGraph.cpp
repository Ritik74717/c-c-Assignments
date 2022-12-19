#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Graph
{
public:
    int mat[20][20]={0};
    int vertex,edge,v,u,e,i,dir=0,j;
    void makeGraph()
    {
    cout<<"Enter Vertex Number and  Number of Edge\n";
    cin>>vertex>>edge;
    cout<<"Press 0 for Directed Graph and 1 for Undirected Graph\n";
    cin>>dir;

    for(i=1;i<=edge;i++)
    {
        cout<<"Enter vertex and edge\n";
        cin>>u>>v;
        if(u<=vertex && v<=vertex)
        {
            mat[u][v]=1;
        if(dir==1)
            mat[v][u]=1;
        }
        else {
            cout<<"Invalid Edge\n";
        }
    }

    }
    void printGraph()
    {
        cout<<"\n Graph is\n";
        for(i=1;i<=vertex;i++)
        {
            for(j=1;j<=vertex;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }


};
int main()
{
    Graph g1;
    g1.makeGraph();
    g1.printGraph();
    return 0;
}
