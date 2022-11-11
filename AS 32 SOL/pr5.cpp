#include<iostream>
using namespace std;
class A
{
protected :
    int x,y,z;
public :
    A()
    {
        cout<<"Default of A "<<endl;
    }
    A(int a,int b)
    {
        x=a;
        y=b;
        cout<<" x = "<<x<<endl<<" y = "<<y<<endl<<"Two parameterized Of A"<<endl;
    }
    A(int a)
    {
        x=a;
        cout<<" x = "<<x<<endl<<"Single Of A"<<endl;
    }

};
class B:public A
{
private :
    int s,t,u;
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
    A a1,a2(5,3),a3(4);
    B b1,b2(4,5);
    return 0;


}
