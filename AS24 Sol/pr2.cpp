#include<iostream>
using namespace std;
void grt(int );
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    grt(a);



}
void grt(int n) 
{
    int i=0,maxi=0;
    while(n!=0)
    {
        i=n%10;     
        if(i>maxi)
        maxi=i;
        n=n/10; 


    }
    cout<<maxi;

}
