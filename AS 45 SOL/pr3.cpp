#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> m1;
    m1.insert(4);
    m1.insert(5);
    m1.insert(2);
    m1.insert(18);

    multiset<int> :: iterator it;
    for(it=m1.begin();it!=m1.end();it++)
        cout<<*it<<" ";
    cout<<"\nNumber of elements are :\n";
    cout<<m1.size()<<endl;
    return 0;

}
