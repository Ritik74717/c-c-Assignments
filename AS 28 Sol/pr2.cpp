#include<iostream>
using namespace std;
class Complex
{
    private:
         int real,img;
    public:
        void set(int real,int img)
        {
            this->real = real;
            this->img = img;
        }
        void display()
        {
            cout<<" Real = "<<real<<" Img = "<<img;
        }
   
};
int main()
{
   Complex c1;
   c1.set(5,6);
   c1.display();
   return 0;

}
