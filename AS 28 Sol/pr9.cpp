#include<iostream>
using namespace std;
class integer
{
  private:
      int x;
  public:
      void set(int a)
      {
        x=a;
      }
      operator int()
      {
        cout<<" int() called "<<endl;
        return x;

      }
};
int main()
{
    integer i1;
    int n;
    i1.set(5);
    n = i1;
    cout<<n;
    return 0;

}
