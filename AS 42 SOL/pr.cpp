#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(10);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    q.push(11);
    cout<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}
