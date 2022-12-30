#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<int,string> m1;
   m1.insert({1,"Ritik Kaushik"});
   m1.insert({2,"Adnan"});
   m1.insert({3,"Satyam"});
   m1.insert({4,"Parag"});

   for(auto itr=m1.begin();itr!=m1.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl;

    return 0;
}
