#include<iostream>
using namespace std;
int pallindrome(int x)
{
    int temp =x,rem=0,rev=0;

    while(temp!=0)
    {
        rem = temp%10;
        rev = (rev*10) + rem;
        temp = temp/10;
    }
    if(rev==x)
        return 1;
    else
        return 0;
}
int main()
{
    int x=12121;
    if(x<0)
    {cout<<"false";
      return 0;}
    if(pallindrome(x))
    {
        cout<<"true";
    }
    else
        cout<<"false";
    return 0;

}
