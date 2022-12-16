#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice =1;
    queue<string> q;
    string str;
    while(true)
    {
        cout<<"Want to enter string press 1 otherwise press Zero\n";
        cin>>choice;
        if(choice==0)
            break;
        cout<<"Enter Single Word String\n";
        cin>>str;
        q.push(str);
    }
    int sizes=q.size();
    string temp[sizes];
    for(int i=0;i<sizes;i++)
    {
        temp[i]=q.front();
        q.pop();
    }
    sort(temp,temp+sizes);
    for(int i=0;i<sizes;i++)
    {
        q.push(temp[i]);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

