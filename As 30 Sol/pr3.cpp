#include<iostream>
using namespace std;
int main()
{
    float x,y,z;
    cout<<"Enter two number\n";
    cin>>x>>y;

    try
    {
        if(x==0)
        throw "zero divident error\n";
        z=x/y;
    }
    catch(const char *msg)
    {
       cout<<msg<<endl;
    }

    cout<<z;
     return 0;

}
