#include<iostream>
using namespace std;
class coordinate
{
   private:
        int x,y,z;
    public:
       void set(int a,int b,int c)
       {
        x=a;
        y=b;
        z=c;
       }
       void display()
       {
           cout<<x<<" "<<y<<" "<<z<<endl;

       }
       coordinate operator,(coordinate c)
       {
         cout<<"Comma operator called\n";
          coordinate cs;
          cs.x = c.x;
          cs.y = c.y;
          cs.z = c.z;
          return cs;

       }


};

int main()
{
  coordinate c1,c2,c3;
  c1.set(5,4,7);
  c2.set(7,8,9);
  c3 = (c1,c2);
  c3.display();

}
