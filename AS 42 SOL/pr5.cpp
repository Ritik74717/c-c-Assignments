#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Applicant
{
    public:
    string name;
    string time;
};
Applicant getEntry()
{
    Applicant person;
    cout<<"Enter Name\n";
    cin>>person.name;
    cout<<"Enter Time\n";
    cin>>person.time;
    return person;
}
int main()
{
    queue<Applicant> q1;
    int i;
    for(i=0;i<3;i++)
    {
        q1.push(getEntry());
    }
    Applicant temp;

    while(!q1.empty())
    {
        temp=q1.front();
        cout<<"Name = "<<temp.name<<" Time = "<<temp.time<<endl;
        q1.pop();
    }

    return 0;
}

