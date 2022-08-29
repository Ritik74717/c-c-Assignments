#include<iostream>
using namespace std;
void sum(int n1,int n2);
void sum(double n1,double n2);
int main()
{
    int a,b;
    double c,d;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    sum(a,b);
    cout<<endl;
    cout<<"enter two real numbers"<<endl;
    cin>>c>>d;
    sum(c,d);
    return 0;

}
void sum(int n1,int n2)
{
    cout<<"Sum is "<<n1+n2;

}
void sum(double n1,double n2)
{
    cout<<"Sum is "<<n1+n2;
}
