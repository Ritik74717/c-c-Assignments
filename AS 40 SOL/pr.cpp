#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int> d1;
    d1.push_back(100);
    d1.push_back(200);
    d1.push_front(10);
    deque<int>::iterator x;
    int i;
    for(x=d1.begin();x!=d1.end();x++)
    {
        cout<<*x<<" " ;
    }
    cout<<endl;
    cout<<d1.size()<<endl;
    cout<<d1.max_size()<<endl;
    d1.pop_back();
    d1.pop_front();
    for(x=d1.begin();x!=d1.end();x++)
    {
        cout<<*x<<" " ;
    }

    return 0;
}
