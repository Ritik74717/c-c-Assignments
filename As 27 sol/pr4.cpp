#include<iostream>
using namespace std;
class Time
{
    private:
         int h,m,s;
    public:
        void set1()
        {
            int x,y,z;
            cout<<"Enter First Time\n";
            cout<<" Hours : ";
            cin>>x;
            h=x;
            cout<<" Minutes : ";
            cin>>y;
            m=y;
            cout<<" Seconds : ";
            cin>>z;
            s=z;
            cout<<endl;
        }
        void set2()
        {
            int x,y,z;
            cout<<"Enter Second Time\n";
            cout<<" Hours : ";
            cin>>x;
            h=x;
            cout<<" Minutes : ";
            cin>>y;
            m=y;
            cout<<" Seconds : ";
            cin>>z;
            s=z;
            cout<<endl;
        }

        
        
        void show()
        {
          cout<<" Hours : "<<h<<endl;
          cout<<" Minutes : "<<m<<endl;
          cout<<" Seconds : "<<s<<endl;

        }
        void operator==(Time t)
        { 
            if(h==t.h && m==t.m && s==t.s)
            {
               cout<<" Time is Same\n";
            }
            else
            {
                cout<<" Time is not same";
            }
            
        }


   
};
int main()
{
   Time t1,t2;
   t1.set1();
   t2.set2();
   t1==t2;
   
   return 0;

}
