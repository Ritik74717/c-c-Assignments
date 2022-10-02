#include<iostream>
using namespace std;
int main()
{
    char email[30];
    int i,flag=0;
    cout<<"Enter email\n";
    cin>>email;
      for(i=0;email[i];i++)
       {
          if(email[i]=='@')
          flag=1;
       }

   try
   {
      if(flag==0)
      throw "incorect email\n";

   }
   
   catch(const char* masg)
   {
     cout<<masg<<endl;
   }
   
    if(flag==1)
    cout<<"Email verified\n"<<email<<endl;
     return 0;

}
