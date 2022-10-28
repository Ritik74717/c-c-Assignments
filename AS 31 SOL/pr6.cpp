#include<iostream>
#include<string.h>
using namespace std;
class B;
class A
{
protected:
    int x;
public:
    A()
    {
        x=10;
    }
    void show()
    {
        cout<<"\n X = : "<<x;
    }
    friend void swap(A *x,B*y);
};
class B
{
protected:
    int y;
public:
    B()
    {
        y=20;
    }
    void show()
    {
        cout<<"\n Y = : "<<y;
    }
    friend void swap(A *x,B *y);
};
void swap(A *n1,B *n2)
{
    int z;
    z=n1->x;
    n1->x=n2->y;
    n2->y=z;
}
int main()
{
    A a;
    B b;
    swap(&a,&b);
    a.show();
    b.show();
    return 0;
}
