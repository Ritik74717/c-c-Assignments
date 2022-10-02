#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter one number\n";
    cin>>x;

    try
    {
        if(x<=0)
        throw "NEGATIVE NUMBER ERROR\n";
        
    }
    catch(const char *msg)
    {
       cout<<msg<<endl;a
    }

    cout<<x;
     return 0;

}
