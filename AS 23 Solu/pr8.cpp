#include<iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"enter two number";
   cin>>x>>y;
   x=x+y;
   y=x-y;
   x=x-y;
   cout<<"x = "<<x<<endl<<"y = "<<y;
    return 0;
}
