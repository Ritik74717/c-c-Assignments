#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m1;
    m1[1]=12;
    m1[2]=13;
    m1[3]=14;
    m1[4]=15;
    m1[5]=16;

    for(auto itr=m1.begin();itr!=m1.end();itr++)
        cout<<itr->first<<" "<<itr->second<<endl;

    return 0;

}
