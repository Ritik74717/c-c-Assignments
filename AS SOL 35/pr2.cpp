#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
T3 grt(T1 x, T2 y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{

    int z=grt<int,int,int>(10,20);
    cout<<z;

    return 0;
}
