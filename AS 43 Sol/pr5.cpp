#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q1;
    q1.push(12);
    q1.push(11);
    q1.push(34);
    q1.push(2);
    q1.push(7);
    while(!q1.empty())
    {
        cout<<q1.top()<<" ";
        q1.pop();
    }
    return 0;
}
