#include<iostream>
using namespace std;
int factorial(int );
int comb(int ,int);
void pascal(int);

int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    pascal(x);
    return 0;

}
int factorial(int n)
{
    int i ,fact=1;
    for(i=n;i>=1;i--)
    {
        fact = fact * i;
    }
    return fact;

}
int comb(int n,int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }



}
