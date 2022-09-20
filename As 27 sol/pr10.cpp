#include<iostream>
#include<cstring>
using namespace std;
class matrix
{
   private:
       int a[3][3],i,j;
    public:
       void set()
       {
          cout<<"ENTER 9 ELEMENTS\n";
          for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
          }
    
       }
       void show()
       {
          
          cout<<"Matrix is :\n";
          for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
          }
          cout<<endl;
    
       }
       matrix operator+(matrix m)
       {
         matrix m1;
          for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
            {
                m1.a[i][j] = a[i][j] + m.a[i][j];
            }
          }
          


          return m1;
          cout<<endl;

          

       }
};
int main()
{
    matrix m1,m2,m3;
    m1.set();
    m2.set();
    m3 = m1+m2;
    m1.show();
    m2.show();
    m3.show();
   
    

    return 0;

}
