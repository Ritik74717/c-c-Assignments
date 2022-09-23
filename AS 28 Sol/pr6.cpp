#include<iostream>
using namespace std;
class Complex
{
  private :
       int real,img;
  public:
      
      Complex()
      {
        real =0;
        img =0;
      }
       void set(int x,int y)
       {
        real = x;
        img = y;
       }
       void display()
       {
        cout<<" Real = "<<real<<" Img = "<<img<<endl;

       }
       
       void assign(Complex c)
       {
         c.real = real;
         c.img =img;
       }
};

int main()
{
   Complex c1,c2;
   c1.set(5,6);
   c1.display();
   
   c1.assign(c2);
   c2.display();
   return 0;

}
