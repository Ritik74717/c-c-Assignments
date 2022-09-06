#include<iostream>
using namespace std;
class circle
{
  private:
        float a,r;
  public:
       void setArea(float x)
       {
          r=x;
          a=3.14*r*r;
       }
       float getArea()
       {
          return a;
       }

};
int main()
{
    circle c1;
    c1.setArea(5);
    cout<<"Area of circle is "<<c1.getArea()<<endl;
    return 0;

}
