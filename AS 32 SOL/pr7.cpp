#include<iostream>
using namespace std;
class A
{
protected :
    int x,y;
public :
    A()
    {
        cout<<"Default of A "<<endl;
    }
    A(int a,int b)
    {
        x=a;
        y=b;
        cout<<"Two parameterized Of A"<<endl;
    }
    A(int a)
    {
        x=a;
        cout<<"Single Of A"<<endl;
    }

};
class B:public A
{
private :
    int s,t;
public:
    B():A()
    {
        cout<<"Default of B "<<endl;

    }
    B(int s,int t):A(s,t)
    {
        cout<<"TWO parameterized of B "<<endl;
    }
};



int main()
{
   B b1,b2(2,5);
    return 0;


}
