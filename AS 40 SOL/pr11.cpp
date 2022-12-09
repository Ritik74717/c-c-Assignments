#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    int i;
    for(i=1;i<=5;i++)
    {
        dq.push_back(i);
    }
    cout<<"Front Element = "<<dq.front()<<endl;
    cout<<"Last Element = "<<dq.back()<<endl;
    return 0;
}
