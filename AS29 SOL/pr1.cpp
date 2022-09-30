#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;

    public:
    
    Complex(int x,int y)
    {
        real = x;
        img =y;
    }
    Complex(int x)
    {
        real =x;
        img = x;
    }

    void display()
    {
        cout<<real<<" "<<img<<endl;
    }
  


};

int main()
{
    Complex c1(5,4);
    c1.display();
    int x=6;
    Complex c2(x);
    c2.display();
    return 0;
}
