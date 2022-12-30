#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool areSame(vector<int> &a,vector<int> &b)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    return(a==b);
}
int main()
{
    vector<int> v1{1,2,5,6,8};
    vector<int> v2{1,5,6,8,2};
    if(areSame(v1,v2))
        cout<<"ARE SAME\n";
    else
        cout<<"Not same\n";

    return 0;

}
