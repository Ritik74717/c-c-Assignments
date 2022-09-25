#include<iostream>
using namespace std;
class integer
{
    private:
         int x;
    public:
         void set(int a)
         {
            x=a;
         }
         void display()
         {
            cout<<" x = "<<x<<endl;
         }
         void operator==(integer i)
         {
            if(x==i.x)
             cout<<"true";
             else
             cout<<"false";
         }
         void operator!()
         {
            x = -x;
         }
         

};
int main()
{
   integer i1,i2;
   i1.set(5);
   i2.set(5);
   i1.display();
   i2.display();
   !i1;
   i1==i2;
   return 0;


}
