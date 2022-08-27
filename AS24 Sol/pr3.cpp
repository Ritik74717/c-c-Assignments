#include<iostream>
using namespace std;
void power(int ,int );
int main()
{
    int x,y;
    cout<<"Enter value of x and y"<<endl;
    cin>>x>>y;
    power(x,y);
    return 0;

}
void power(int a,int b)
{

    int i=1,p=1;
    for(i=1;i<=b;i++)
    {
        p=a*p;
    }
    cout<<p;

}
