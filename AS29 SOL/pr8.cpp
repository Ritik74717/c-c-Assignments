#include<iostream>
using namespace std;
class Rupee
{
  private:
   int r;
   public:
   Rupee()
   {

   }
   Rupee(int x)
   {
    r=x;
   }
   void display()
   {
    cout<<r<<endl;
   }

   operator int()
   {
    return r;
   }
};
int main()
{
    Rupee rs,re;
    int x=5;
    rs=x;
    re=x;
    re.display();
    rs.display();
    return 0;

}
