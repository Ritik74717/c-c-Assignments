#include<iostream>
using namespace std;
float area(int );
int area(int,int);
float area(float ,float);
int main()
{
    int l,b,r;
    float ba ,h;
    cout<<"enter radius of circle"<<endl;
    cin>>r;
    cout<<"Area of circle is "<<area(r)<<endl;
    cout<<"enter length and breadth of rectangle"<<endl;
    cin>>l>>b;
    cout<<"Area of rectangle is "<<area(l,b)<<endl;
    cout<<"enter base and height of triangle"<<endl;
    cin>>ba>>h;
    cout<<"Area of Triangle is "<<(float)area(ba,h);
    return 0;




    return 0;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
float area(float ba,float h)
{
    return ((ba*h)/2);
}
