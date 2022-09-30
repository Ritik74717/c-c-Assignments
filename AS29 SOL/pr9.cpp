#include<iostream>
using namespace std;
class dollar
{
  private:
   int r;
   public:
   dollar()
   {

   }
   dollar(int x)
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
    dollar rs,re;
    int x=5;
    rs=x;
    re=x;
    re.display();
    rs.display();
    return 0;

}
