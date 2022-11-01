#include<iostream>
using namespace std;
template<class T1,class T2,class T3>

T3 sum(T1 x,T2 y)
{
    return x+y;
}
int main()
{
    int s=sum<int,int,int>(5,10);
    cout<<s;
    return 0;
}
