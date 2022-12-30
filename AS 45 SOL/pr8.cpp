#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,5,8,12,8,33};
    multiset<int> m(arr,arr+5);
    for(auto it=m.begin();it!=m.end();it++)
        cout<<*it<<" "<<endl;


    cout<<"\nAfter Erasing\n";
    auto itr=m.find(8);
    if(itr!=m.end())
    {
        m.erase(itr);
    }

    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<*itr<<" "<<endl;
    }
    return 0;

}
