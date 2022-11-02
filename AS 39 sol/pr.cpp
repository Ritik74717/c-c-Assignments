#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int> f1;
    f1.push_front(100);
    f1.push_front(200);
    f1.push_front(300);
    f1.push_front(400);
    //f1.pop_front();


    forward_list<int>::iterator x;
    for(x=f1.begin();x!=f1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}
