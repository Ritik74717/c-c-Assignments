#include<iostream>
#include<list>
using namespace std;
void display(list<int> l)
{
    list<int> :: iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it;
        cout<<endl;
    }
}
int main()
{
    list<int> list1;
    int x,i;
    cout<<"Enter 5 elements\n";
    for(i=0;i<5;i++)
    {
        cin>>x;
        list1.push_front(x);
    }
    display(list1);

    return 0;
}
