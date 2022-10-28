#include<iostream>
#include<string.h>
using namespace std;
class base
{
protected:
    int x,y,z;
public:
    void accept()
    {
        cout<<"Enter Hindi Marks\n";
        cin>>x;
        cout<<"Enter English Marks\n";
        cin>>y;
        cout<<"Enter Maths Marks\n";
        cin>>z;
    }
};
class add:public base
{
protected:
    int sum=0;
public:
    int addition()
    {
        sum=x+y+z;
        return sum;

    }
};
class percent:public add
{
    float p;
public:
    void percentage()
    {

        p=(addition())/(300.0)*(100);
        cout<<"Percentage = : "<<p<<endl;

    }
};
int main()
{
    percent p1;
    p1.accept();
    p1.percentage();

    return 0;
}
