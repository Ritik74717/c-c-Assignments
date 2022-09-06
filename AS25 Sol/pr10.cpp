#include<iostream>
using namespace std;
class Area
{
     private:
           int l,w,s,ar,as;
           float r,a;
     public:
             void square()
                   {
                       cout<<"\nEnter side of square\n";
                       cin>>s;
                       as=s*s;
                       cout<<"Area of Square is "<<as;
           
                   }
             void rectangle()
                   {
                     cout<<"\nEnter length and with of Rectangle\n";
                     cin>>l>>w;
                     ar=l*w;
                     cout<<"Area of rectangle is "<<ar;
                   
                   }

             void circle()
                 {
                    cout<<"\nEnter radius Of circle\n";
                    cin>>r;
                    a = 3.14*r*r;
                    cout<<"Area of Circle is "<<a;
              
                 }

};

int main()
{
     int n;
   Area a1;    
  cout<<"\n1: Area of Square\n";
  cout<<"\n2: Area of Rectangle\n";
  cout<<"\n3: Area of Circle\n";
  cout<<"\nEnter your choice\n";
  cin>>n;

  switch (n)
  {
      case 1:
          a1.square();
          break;
     case 2:
          a1.rectangle();
          break;
     case 3:
          a1.circle();
          break;
     default:
           cout<<"Invalid input" ;     

  }
  return 0;
          

}
