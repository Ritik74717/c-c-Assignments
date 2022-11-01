#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
T3 add(T1 x, T2 y)
{
    return (x+y);
}
int main()
{
    int sum=0;
    float f;
    sum = add<int,int,int>(4,5);
    f=add<float,int,float>(2.5,5);
    cout<<"Sum = "<<sum<<endl;
     cout<<"Sum = "<<f<<endl;
    return 0;
}
