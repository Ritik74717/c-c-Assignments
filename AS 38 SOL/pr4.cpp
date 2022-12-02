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
    list1.push_front(100);
    list1.push_front(10);
    list1.push_front(700);
    list1.push_front(580);
    display(list1);

    cout<<"After Reverse\n";
    list<int> :: reverse_iterator i1;
    for(i1=list1.rbegin();i1!=list1.rend();i1++)
    {
        cout<<*i1<<endl;
    }

    return 0;
}
