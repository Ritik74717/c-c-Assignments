#include<iostream>
using namespace std;
class Time
{
  private:
        int h,m,s;
    
  public:
       void setH(int a)
       {
         h=a;
       }

        void setM(int b)
       {
         m=b;
       }

        void setS(int c)
       {
         s=c;
       }

       int getH()
       {
         return h;
       }
       int getM()
       {
         return m;
       }
       int getS()
       {
         return s;
       }



};

int main()
{
  Time t1;
  t1.setH(5);
  t1.setM(45);
  t1.setS(26);

  cout<<t1.getH()<<"hr "<<t1.getM()<<"min "<<t1.getS()<<"sec "<<endl;

}
