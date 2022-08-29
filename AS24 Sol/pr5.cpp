#include<iostream>
using namespace std;
void fib(int );
int main()
{
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    fib(x);
    return 0;


}
void fib(int n)
{
    int curr=0,prev=1,next=0,i;
    for(i=1;1;i++)
    {
        next=curr + prev;
        cout<<next<<" ";
        prev = curr;
        curr = next;

        if(next == n)
        {
               cout<<endl<<"found"<<endl;
               break;
        }

        if(next > n)
        {
            cout<<endl<<"not found";
            break;
        }

    }



}
