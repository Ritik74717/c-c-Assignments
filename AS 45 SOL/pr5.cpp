#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,5,8,12,33};
    multiset<int> m(arr,arr+5);
    for(auto it=m.begin();it!=m.end();it++)
        cout<<*it<<" "<<endl;
    if(!m.empty())
    {
        cout<<"Not Empty\n";
    }
    else
    {
        cout<<"Empty";
    }
    return 0;

}
