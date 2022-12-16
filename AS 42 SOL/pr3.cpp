#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(14);
    if(!q.size())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();


    if(!q.size())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;
    return 0;
}

