#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;

    public:
    
    void set(int x,int y)
    {
        real=x;
        img=y;
    }

    void display()
    {
        cout<<real<<" "<<img<<endl;
    }
    operator int()
    {
        return (real + img);
    }
  


};

int main()
{
    Complex c1;
    c1.set(5,4);
    int x;
    x=c1;
    cout<<x;
    
    return 0;
}
