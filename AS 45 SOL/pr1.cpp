#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m1;
    m1.insert(5);
    m1.insert(7);
    m1.insert(12);
    m1.insert(10);

    multiset<int> :: iterator it;
    for(it=m1.begin();it!=m1.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
