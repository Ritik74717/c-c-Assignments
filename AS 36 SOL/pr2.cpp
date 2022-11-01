#include<iostream>
using namespace std;
#include<array>
#include<tuple>
int main()
{
    array<int,5> ar;
    int i;
    for(i=0;i<ar.size();i++)
        ar[i]=i;
    for(i=0;i<ar.size();i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    cout<<"total elements = "<<ar.size()<<endl;
    return 0;

}
