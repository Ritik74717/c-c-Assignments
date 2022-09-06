#include<iostream>
using namespace std;
class large
{
   private:
        int n[3]={0},i,l=0;
   public:
        void max(int n1,int n2,int n3)
        {
            n[0]=n1;
            n[1]=n2;
            n[2]=n3;

            for(i=0;i<3;i++)
            {
               if(n[i]>l)
                l=n[i];

            }
            cout<<"Large number is "<<l<<endl;

        }

};

int main()
{
  large l1;
  l1.max(10,10,5);

}
