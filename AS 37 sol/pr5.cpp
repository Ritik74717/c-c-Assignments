#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v1;
    vector<int> v2;
    int i;

    for(i=0;i<5;i++)
    {

        v1.push_back(i);
    }

    vector<int>::iterator x;
    for(x=v1.begin();x!=v1.end();x++)
    {
        cout<<*x<<" ";
    }
     cout<<endl;
    v2.assign(v1.begin(),v1.end());
    for(x=v2.begin();x!=v2.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}

