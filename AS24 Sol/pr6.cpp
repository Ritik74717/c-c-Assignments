#include<iostream>
using namespace std;
void swap(int &n1,int &n2);
int main()
{
    int x,y;
    cout<<"Enter value of x and y"<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<"x = "<<x<<endl<<"y = "<<y;
    return 0;
}
void swap(int &n1,int &n2)
{
    int t;
    t=n1;
    n1=n2;
    n2=t;
}
