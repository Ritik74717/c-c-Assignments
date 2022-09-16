#include<iostream>
using namespace std;
class unary
{
    private:
       int x;
    public:
        void set(int a)
        {
            x=a;
        }
        void operator++()
        {
            ++x;
        }
        void operator--()
        {
            --x;
        }
        int get()
        {
            return x;
        }

};
int main()
{
  unary u1,u2;
  u1.set(5);
  u2.set(8);
  ++u1;
  --u2;
  cout<<u1.get()<<endl;
  cout<<u2.get();
  return 0;

}
