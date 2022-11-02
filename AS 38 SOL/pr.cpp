#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int> l1;
    int i;
    for(i=0;i<5;i++)
    {
        l1.push_back(i);
    }

    l1.push_front(10);
    //l1.reverse();
    //l1.sort();
   //l1.pop_front();
    //l1.pop_back();
    //cout<<l1.front();
    //l1.remove(10);
    list<int>::iterator x;
    for(x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}
