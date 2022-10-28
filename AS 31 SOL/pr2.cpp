#include<iostream>
#include<string.h>
using namespace std;
class base
{
protected:
    int x,y;
public:
    void accept()
    {
        cout<<"Enter two numbers\n";
        cin>>x>>y;
    }
};
class add:public base
{
    int sum;
public:
    void addition()
    {
        sum=x+y;
        cout<<" Sum is : "<<sum<<endl;
    }
};
int main()
{
    add n1;
    n1.accept();
    n1.addition();
    return 0;
}
