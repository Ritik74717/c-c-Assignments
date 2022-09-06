#include<iostream>
using namespace std;
class reverse
{
   private:
        int n,a,b,res;
   public:
        void rev(int n)
        {
            a=n%10;
            a=a*100;
            n=n/10;
            b=n%10;
            b=b*10;
            n=n/10;
            res=a+b+n;
            cout<<res;

        }

};

int main()
{
  reverse r1;
  r1.rev(754);

}
