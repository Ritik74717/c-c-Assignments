#include<iostream>
using namespace std;
template<class T1,class T2,class T3,class T4>
T4 grt(T1 x, T2 y,T3 z)
{
    if(x>y &&x>z)
        return x;
    else if(y>z)
        return y;
    else
        return z;
}
int main()
{

    int z=grt<int,int,int,int>(10,20,15);
    cout<<z;

    return 0;
}
