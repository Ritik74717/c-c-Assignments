#include<iostream>
using namespace std;
class factorial
{
   private:
        int f=1,i,n;

    public:
        void fact()
        {
            cout<<"Enter a number\n";
            cin>>n;
            if(n==1 || n==0)
            cout<<"Factorial is 1\n";
            else
            {
               for(i=n;i>=1;i--)
               {
                  f=f*i;

               }
                cout<<"Factorial is "<<f<<endl;
              

            }
        }
        




    


};
int main()
{
   factorial f1;
   f1.fact();
   return 0;
   

}
