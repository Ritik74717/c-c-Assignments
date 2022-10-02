#include<iostream>
using namespace std;
int main()
{
    float a,b,c,k;
    cout<<"Enter two Numbers\n";
    cin>>a>>b;

    try{
        if(b==0)
       { throw " Zero divisible Error";}
        if(b==1)
        {throw k=1;}
        if(b==2)
        {throw exception();}

         c=a/b;
    }catch(const char *msg)
    {
        cout<<msg<<endl;
    }catch(float x){
        cout<<x<<"error"<<endl;
    }
    catch(...){
        cout<<"divide by 2 error\n";
    }
   
    
     cout<<c<<endl;

     return 0;

}
