#include<iostream>
using namespace std;
class Rectangle
{
private:
    double ar;
public :
    void area(int x,int y)
    {
        ar=x*y;
    }
    void area(int x,double y)
    {
        ar=x*y;
    }
    void area(double x,int y)
    {
        ar=x*y;
    }
    void area(double x,double y)
    {
        ar=x*y;
    }
    void display()
    {
        cout<<"Area is : "<<ar<<endl;
    }
};
int main()
{
    Rectangle r1,r2,r3,r4;
    r1.area(5,4);
    r1.display();

    r2.area(2.5,1.6);
    r2.display();

    r3.area(3,2.9);
    r3.display();

    r4.area(2.4,3.5);
    r4.display();
    return 0;
}
