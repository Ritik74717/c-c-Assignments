#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutation(int n,int k)
{
    int i, flag=1;
    deque<int> dq;
    for(i=1;i<=n;i++)
    {
        dq.push_back(i);
    }
    vector<int> v;
    for(i=1;i<=n;i++)
    {
        if(flag==1)
        {
            v.push_back(dq.front());
            dq.pop_front();
            if(k>1)
            {
                flag=0;
            }
            k--;
        }
        else
        {
            v.push_back(dq.back());
            dq.pop_back();
            if(k>1)
            {
                flag=1;
            }
            k--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n=10,k=5;
    permutation(n,k);
    return 0;
}
