#include<iostream>
using namespace std;
class num
{
    private:
          int a[50];
          const int size=50;
    public:
         void set(int index,int element)
         {
            if(index>size)
             {
                cout<<"Array out of Bound\n";
                exit(0);
             }
             else
             {
                a[index]=element;
             }
         }
         void display(int index)
         {
            cout<<a[index]<<endl;
         }

         int operator[](int index)
         {
             if(index>size)
             {
                cout<<"Array out of Bound\n";
                exit(0);
             }
             
             return a[index];

         }
    
};
int main()
{
  num n1,n2;
  n1.set(5,24);
  n1.display(5);
  n2.set(10,56);
  cout<<n2[10];

  return 0;


}
