#include<iostream>
using namespace std;
template<class T1,class T2>

void swapnum(T1 x,T2 y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}
int main()
{

    swapnum(10,20);
    return 0;
}
