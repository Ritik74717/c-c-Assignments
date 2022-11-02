#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v1;
    int i,n;
    cout<<"Enter 5 numbers\n";
    for(i=0;i<5;i++)
    {
        cin>>n;
        v1.push_back(n);
    }
    vector<int>::iterator x;
    for(x=v1.begin();x!=v1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}

