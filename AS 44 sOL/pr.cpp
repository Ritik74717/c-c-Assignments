#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> s1;
    set<int> s2;
    s1.insert(10);
    s1.insert(111);
    s1.insert(12);
    s1.insert(133);
    s1.insert(10);
    s2.insert(s1.begin(),s1.end());

    set<int> :: iterator x;
    for(x=s1.begin();x!=s1.end();x++)
        cout<<*x<<" ";
    cout<<endl;
    for(x=s2.begin();x!=s2.end();x++)
        cout<<*x<<" ";
    return 0;
}
