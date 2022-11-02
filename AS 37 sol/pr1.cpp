#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v1;
    int i;
    for(i=0;i<=10;i++)
    {
        v1.push_back(i*100);
    }
    vector<int>::iterator x;
    for(x=v1.begin();x!=v1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}

