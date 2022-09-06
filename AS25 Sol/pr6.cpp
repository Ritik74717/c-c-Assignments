#include<iostream>
using namespace std;
class square
{ 
     private:
           int n;
     public:
           void set(int x)
           {
               n=x*x;
           }
           int get()
           {

               return n;
           }

};
int main()
{
   square s1;
   s1.set(5);
   cout<<"Square is "<<s1.get()<<endl;
     return 0;

}
