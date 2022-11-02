#include<iostream>
#include<stack>
#include<iterator>
using namespace std;
int main()
{
    stack<int> s1;
    for(int i=0;i<5;i++)
    {
        s1.push(i*100);
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;

}
