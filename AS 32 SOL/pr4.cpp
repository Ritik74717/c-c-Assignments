#include<iostream>
using namespace std;
class Addition
{
protected :
    double a=0,b=0;
public:
    void add(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void add(int a,double b)
    {
        this->a=a;
        this->b=b;
    }
    void add(double a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void add(double a,double b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"Sum is : "<<a+b<<endl;
    }
};
int main()
{
    Addition a1,a2,a3,a4;
    a1.add(5,4);
    a1.display();

    a2.add(4,5.6);
    a2.display();

    a3.add(5.6,4);
    a3.display();

    a4.add(3.2,2.3);
    a4.display();
    return 0;
}
