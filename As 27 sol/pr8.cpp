#include<iostream>
#include<cstring>
using namespace std;
class matrix
{
   private:
       int a[3][3],i,j,b[3][3];
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
       void negative()
       {
         cout<<"Matrix is :\n";
          for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
            {
                b[i][j] = -(a[i][j]);
            }
          }

           for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
          }
          cout<<endl;

          

       }
};
int main()
{
    matrix m1;
    m1.set();
    m1.show();
    m1.negative();
    

    return 0;

}
