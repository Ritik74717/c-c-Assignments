#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    deque<int> dq;
    int i;
    for(i=1;i<=10;i++)
    {
        v.push_back(i);

    }
    for(i=0;i<10;i++)
    {
        if(v[i]%2==0)
        {
            dq.push_front(v[i]);
        }
        else
        {
            dq.push_back(v[i]);
        }
    }
    for(i=0;i<10;i++)
    {
        cout<<dq[i]<<" ";
    }
    return 0;
}
