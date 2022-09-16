#include<iostream>
using namespace std;
class complex
{
  private:
       int x,y;
  public:
       void set(int a,int b)
       {
         x=a;
         y=b;
       }
       void get()
       {
        cout<<" Real = "<<x<<" Img = "<<y<<endl;
       }
       complex friend operator+(complex,complex);

};
complex operator+(complex n1,complex n2)
{
    complex temp;
    temp.x = n1.x + n2.x;
    temp.y = n1.y + n2.y;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.set(5,4);
    c2.set(6,7);
    c3=c1+c2;
    c3.get();
    return 0;
}
