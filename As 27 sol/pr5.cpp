#include<iostream>
using namespace std;
class numbers
{
  private:
        int x;
   public:
   numbers()
   {
     x=0;
   }
   void set(int a)
   {
       x=a;
     
   }
   void get()
   {
      cout<<" a = "<<x<<endl;

   }

   void operator-()
   {
      x = -x;
   }
};
int main()
{
    numbers n1,n2;
    n1.set(4);
    n2.set(6);
    -n1;
    -n2;
    
    n1.get();
    n2.get();


    return 0;
}
