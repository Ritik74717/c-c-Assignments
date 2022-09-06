#include<iostream>
using namespace std;
class Complex
{
   private:
        int real,img;

   public:
        void setReal(int x)
        {
            real=x;
            
        }

        int getReal()
        {
            return real;
        }

        void setImg(int y)
        {
            img=y;
        }

         int getImg()
        {
            return img;
        }

};
int main()
{
   Complex c1,c2;
   c1.setReal(5);
   c1.setImg(6);
   c2.setReal(7);
   c2.setImg(9);

   cout<<c1.getReal()<<" + "<<c1.getImg()<<"i"<<endl;
   cout<<c2.getReal()<<" + "<<c2.getImg()<<"i";
   cout<<endl;
   return 0;


}
