#include<iostream>
using namespace std;
class Complex
{ 
   private:
         int a,b;
   public:
        void set(int x,int y)
        {
           a=x;
           b=y;
        }
        void show()
        {
           cout<<"Real = "<<a<<" Img = "<<b<<endl;

        }
        
        Complex add(Complex X)
        {
            Complex temp;
            temp.a = a+X.a;
            temp.b = b+X.b;
            return temp;
        }


};

int main()
{
    Complex c1,c2,c3;
    c1.set(5,4);
    c2.set(6,8);
    c1.show();
    c2.show();
    c3=c1.add(c2);
    c3.show();
    
    return 0;


}
