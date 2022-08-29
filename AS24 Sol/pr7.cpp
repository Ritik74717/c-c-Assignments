#include<iostream>
using namespace std;
int sum(int ,int ,int=0);

int main()
{
    int x,y,z;
    cout<<"Enter 2 numbers"<<endl;
    cin>>x>>y;
    cout<<"Sum is "<<sum(x,y)<<endl;

     cout<<"Enter 3 numbers"<<endl;
     cin>>x>>y>>z;
     cout<<"Sum is "<<sum(x,y,z)<<endl;
     return 0;

}
int sum(int n1,int n2,int n3)
{
    return n1+n2+n3;
}

