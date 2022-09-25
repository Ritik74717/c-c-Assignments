#include<iostream>
using namespace std;
class Distance
{
  private:
     int feet,inches;
  public:
   
   Distance()
   {
    
   }

    
    Distance operator() ( int a,int b,int c)
    {
        feet = a+c+5;
        inches = a+b+15;
    }


     void display()
     {
       cout<<" Feet = "<<feet<<" Inches = "<<inches<<endl;

     }
};

int main()
{
   Distance d1(5,4,4);
   d1.display();
   return 0;


}
