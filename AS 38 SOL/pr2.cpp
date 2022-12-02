#include<iostream>
#include<list>
using namespace std;

void display(list<int> l1)
{
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
        cout<<endl;
    }
}
int main()
{
   list<int> l;
   l.push_front(12);
   l.push_front(13);
   l.push_front(16);
   l.push_front(18);
   l.push_back(33);
   l.push_back(54);
   display(l);
   cout<<endl;

   list<int>::iterator it;
   it=l.begin();
   l.insert(it,400);
   l.insert(it,90);
   l.insert(it,89);
   display(l);
   cout<<endl;

   list<int> l2;
   l2.assign(5,100);
   display(l2);


    return 0;
}
