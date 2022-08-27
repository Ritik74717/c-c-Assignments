#include<iostream>
using namespace std;
void prime(int );
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    prime(x);
    return 0;
}
void prime(int n)
{
   int flag=0,i;
   for(i=2;i<n/2;i++)
   {
       if(n%i==0)
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
    cout<<"Prime";
   else
    cout<<"Not prime";





}
