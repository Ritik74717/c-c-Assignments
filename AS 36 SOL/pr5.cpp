#include<iostream>
using namespace std;
#include<array>
#include<tuple>
#include<iterator>
int main()
{
    array<int,5> ar;
    int i;
    for(i=0;i<ar.size();i++)
        ar[i]=i;
    cout<<endl;
    array<int,5>::iterator x;
    for(x=ar.begin();x!=ar.end();x++)
        cout<<*x<<" ";

    return 0;

}
