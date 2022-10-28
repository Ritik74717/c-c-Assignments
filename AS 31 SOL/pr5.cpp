#include<iostream>
using namespace std;
class item
{
public:
    int item_no;
    float price;
    string item_name;
};
class discountitem:public item
{
public:
    double percent,discount;
    int disc;
    void aceeptDetails()
    {
      cout<<"\n---------------------";
      cout<<"\nITEM DETAILS";
        cout<<"\nEnter item-no :";
        cin>>item_no;
        cout<<"\nEnter item name :";
        cin>>item_name;
        fflush(stdin);
        cout<<"\nEnter price :";
        cin>>price;
        cout<<"\nEnter Discount :";
        cin>>disc;
    }
    void calcdiscount()
    {
        discount= (price)*(disc/100.0);
        percent=price - discount;


    }

    void display()
    {
        cout<<"\n------------------------";
        cout<<"\nRITIK - PVT - LIMITED ";
        cout<<"\n------------------------";
        cout<<"\n Item no : "<<item_no;
        cout<<"\n Item name : "<<item_name;
        cout<<"\n Item price : "<<price;
        cout<<"\n Discount : " <<disc;
        cout<<"\n Total Price : "<<percent;
        cout<<"\n-----------------------\n";
    }
};
int main()
{
    int n,i,payable=0,totaldiscount=0;
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
        totaldiscount=totaldiscount+d1[i].discount;
    }

    cout<<"\n------Final Bill-------";
    cout<<"\nTotal Discount : "<<totaldiscount;
    cout<<"\nPayable Amount : "<<payable;


    return 0;
}
