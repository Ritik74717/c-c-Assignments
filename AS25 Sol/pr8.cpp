#include<iostream>
using namespace std;
class rectangle
{
   private:
        int l,w,a;
   public:
        void setArea(int x,int y)
        {
          l=x;
          w=y;
          a=l*w;
        }
        int getArea()
        {
          return a;
        }

};
int main()
{
   rectangle r1;
   r1.setArea(5,10);
   cout<<"Area is "<<r1.getArea();

}
