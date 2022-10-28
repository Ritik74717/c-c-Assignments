#include<iostream>
#include<string.h>
using namespace std;
class person
{
protected:
    char name[20];
    char address[60];
    long long mobile;


};
class employee:public person
{
public:
    char ename[20];
    int empNum;


};
class manager:public employee
{
public:
    char desgination[20];
    char department[20];
    int salary;
    int i,temp=0;
public:
    void acceptDetails()
    {
        cout<<"------------------\n";
        cout<<"ENTER EMPLOYEE DETAILS \n";
        cout<<"Enter name\n";
        cin>>ename;
        cout<<"Enter Emp-id\n";
        cin>>empNum;
        cout<<"Enter designation\n";
        cin>>desgination;
        cout<<"Enter Department\n";
        cin>>department;
        cout<<"Enter Salary\n";
        cin>>salary;
        cout<<"Enter Mobile number\n";
        cin>>mobile;
    }


};
int main()
{
    int n,i,temp=0;
    cout<<"Enter Number of Managers\n";
    cin>>n;
    manager m1[100];
    for(i=1;i<=n;i++)
    {
        m1[i].acceptDetails();
    }

    for(i=1;i<=n;i++)
    {
        if(m1[temp].salary<m1[i].salary)
        {
            temp=i;
        }
    }
    cout<<"\nManager with highest salary is :"<<m1[temp].salary;
    cout<<"\nManager name is :"<<m1[temp].ename;

    return 0;
}
