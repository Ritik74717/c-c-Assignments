#include<iostream>
using namespace std;
void max(int n1,int n2);
void max(double n1,double n2);
int main()
{
    int a,b;
    double c,d;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    max(a,b);
    cout<<endl;
    cout<<"enter two real numbers"<<endl;
    cin>>c>>d;
    max(c,d);
    return 0;

}
void max(int n1,int n2)
{
    if(n1>n2)
        cout<<"max = "<<n1;
    else
        cout<<"max = "<<n2;
}
void max(double n1,double n2)
{
  if(n1>n2)
        cout<<"max = "<<n1;
    else
        cout<<"max = "<<n2;
}
