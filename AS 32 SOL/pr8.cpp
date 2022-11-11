#include<iostream>
using namespace std;
class Factorial
{
private:
    int n,fact=1;
public:
    Factorial(int x)
    {
        n=x;
    }
    Factorial(Factorial &f)
    {
        n=f.n;
    }
    void calculate()
    {
        int i=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial is : "<<fact<<endl;
    }
};
int main()
{
    Factorial f1(5);
    f1.calculate();

    Factorial f2(f1);
    f2.calculate();
    return 0;
}
