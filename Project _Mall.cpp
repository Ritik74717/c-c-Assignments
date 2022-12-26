#include<iostream>
#include<string>
using namespace std;
class item
{
public:
    int item_no=0;
    float price=0;
    string item_name="NULL";
};
class discountitem:public item
{
public:
    double percent,discount;
    int disc;
    static int flag;
    void aceeptDetails()
    {
        cout<<"\n---------------------";
        cout<<"\nITEM DETAILS";
        cout<<"\nEnter item-no :";
        cin>>item_no;
        cin.ignore();
        cout<<"\nEnter item name :";
        getline(cin,item_name);
        cout<<"\nEnter price :";
        cin>>price;
        cout<<"\nEnter Discount :";
        cin>>disc;
        if(item_no!=0&&item_name!="NULL"&&price!=0)
        {
          flag=1;
        }
    }
    void calcdiscount()
    {
        discount= (price)*(disc/100.0);
        percent=price - discount;
    }

    void display()
    {

        if(flag==0)
        {
            cout<<"\n--------------------------------\n";
            cout<<"\nError : You Enter invalid value\n";
        }
        else
        {
        cout<<"\n------------------------";
        cout<<"\nRITIK - PVT - LIMITED ";
        cout<<"\n------------------------";
        cout<<"\n Item no : "<<item_no;
        cout<<"\n Item name : "<<item_name;
        cout<<"\n Item price : "<<price;
        cout<<"\n Discount : " <<disc<<"%";
        cout<<"\n Total Price : "<<percent;
        cout<<"\n-----------------------\n";
        }
    }
};
int discountitem:: flag=0;
int main()
{
    int n,i;
    float payable=0,totaldiscount=0;
    cout<<"\nEnter Number of items : ";
    cin>>n;
    discountitem d1[100];
    for(i=0;i<n;i++)
    {
        d1[i].aceeptDetails();
    }
    for(i=0;i<n;i++)
    {
         d1[i].calcdiscount();

    }

    for(i=0;i<n;i++)
    {
        d1[i].display();
        d1[i].calcdiscount();
    }
    for(i=0;i<n;i++)
    {
        payable=payable+d1[i].percent;
    }
    for(i=0;i<n;i++)
    {
        totaldiscount=totaldiscount+d1[i].disc;
    }

    cout<<"\n------Final Bill-------";
    cout<<"\nTotal Discount : "<<totaldiscount<<"%";
    cout<<"\nPayable Amount : "<<payable;
    return 0;
}
