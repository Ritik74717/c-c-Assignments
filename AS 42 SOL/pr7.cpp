#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1,q2;
    int i;
    for(i=1;i<5;i++)
    {
        q1.push(i);
    }

    for(i=1;i<5;i++)
    {
        q2.push(2*i);
    }
    q1.swap(q2);
    cout<<"After Swapping\n";
    cout<<"Queue 1 :\n";
    while(!q1.empty())
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
    cout<<"Queue 2 :\n";
    while(!q2.empty())
    {
        cout<<q2.front()<<endl;
        q2.pop();
    }
}
