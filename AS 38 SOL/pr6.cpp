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
    list1.push_front(12);
    list1.push_front(13);
    list1.push_front(14);
    list1.push_front(120);
    list1.push_front(17);


    cout<<"Front element "<<list1.front()<<endl;
    cout<<"Last Element "<<list1.back()<<endl;

    return 0;
}
