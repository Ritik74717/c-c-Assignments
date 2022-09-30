#include<iostream>
using namespace std;
class Time
{
  int h,m;
  public:
  Time()
  {

  }
  Time(int duration)
  {
    h=duration/3600;
    m = duration%3600;
  }

  void display()
  {
    cout<<" Hours = "<<h<<" Min = "<<m<<endl;
  }
};

int main()
{
    int d = 1200;
    Time t;
    t = d;
    t.display();
}
