#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char name[6];
  int i,l=0,count=0,flag=0;
  cout<<"Enter name\n";
  cin>>name;
  l=strlen(name);
  for(i=0;i<6;i++)
  {
      if(name[i]>='0'&& name[i]<='9')
      flag=1;
      if(name[i]=='@'||name[i]=='#'||name[i]=='%')
      flag=1;

      

  }

  try{
      if(flag==1 || l>6)
      throw " Incorrect name\n";

  }

  catch(const char *msg)
  {
    cout<<msg;
  }

  if(l>=0 && l<=6 && flag==0)
  cout<<"CORRECT name\n"<<name<<endl;

  return 0;

}
