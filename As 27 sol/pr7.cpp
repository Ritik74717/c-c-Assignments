#include<iostream>
#include<cstring>
using namespace std;
class fraction
{
    private:
          long numerator;
          long denominator;
    public:
         void set(int l,int d)
         {
            numerator = l;
            denominator = d;
         }
         void display()
         {
            cout<<numerator<<"/"<<denominator<<endl;

         }
         fraction operator++()
         {
            fraction f;
           f.numerator = ++numerator;
            f.denominator = ++denominator;
            return f;
         }
        
        fraction operator++(int dummy)
         {
              fraction f;
           f.numerator = numerator++;
            f.denominator = denominator++;
            return f;
         }
         void operator=(fraction f)
         {
             numerator = f.numerator;
             denominator = f.denominator;
         }

};

int main()
{
    fraction f1,f2,f3;
    f1.set(5,6);
    f2.set(9,4);
    ++f1;
    f2++;
    f3 = ++f2;
    f1.display();
    f2.display();
    f3.display();
    return 0;
}
