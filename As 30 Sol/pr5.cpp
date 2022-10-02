#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char mobile[10];
   int i,count=0;
    cout<<"Enter mobile number\n";
     cin>>mobile;
     for(i=0;i<10;i++)
       {
         if((mobile[i]) >='0'&& (mobile[i])<='9')
          count++;
        
       }

   try
   {
      if(count!=10 || strlen(mobile)>10)
      throw "incorect mobile number\n";

   }
   
   catch(const char* masg)
   {
     cout<<masg<<endl;
   }
   
    if(count==10 && strlen(mobile)<=10)
    cout<<"Mobile verified\n"<<mobile<<endl;
     return 0;

}
