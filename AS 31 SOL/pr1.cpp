#include<iostream>
#include<string.h>
using namespace std;
class person
{
protected:
    char name[20];
    int age;
public :
    void setName(char *n)
    {
        strcpy(name,n);
    }
    void setAge(int a)
    {
        age=a;
    }
};
class employee:public person
{
private:
    int emp_id,salary;
public:
    void setEmpid(int id)
    {
        emp_id=id;
    }
    void setSalary(int s)
    {
        salary = s;
    }
    void display()
    {
        cout<<"Person = "<<name<<"  age = "<<age<<endl;
        cout<<"Emp-id = "<<emp_id<<"  Salary = "<<salary<<endl;
    }

};
int main()
{
    employee e1;
    e1.setName("Ritik");
    e1.setAge(20);
    e1.setEmpid(1);
    e1.setSalary(40000);
    e1.display();
    return 0;
}
