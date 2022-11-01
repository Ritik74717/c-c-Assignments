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
    cout<<endl;
    if(!ar.empty())
        cout<<" ARRAY IS NOT EMPTY\n";
    else
        cout<<"Array is empty\n";

    return 0;

}
