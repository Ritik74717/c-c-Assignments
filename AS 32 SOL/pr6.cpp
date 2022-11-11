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

class C:public B
{

protected:
    int n1,n2;
public:
    C():B()
    {
        cout<<"Default of C"<<endl;
    }
    C(int na,int nb):B(na,nb)
    {
        cout<<"Two parameterized Of C"<<endl;
    }

};


int main()
{
   /* A a1,a2(5,3),a3(4);
    B b1,b2(4,5);*/

    C c1,c2(3,3);
    return 0;


}
