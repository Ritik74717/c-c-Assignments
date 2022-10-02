#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char pin[6];
  int i,count=0;
  cout<<"Enter pin-code\n";
  cin>>pin;
  for(i=0;i<6;i++)
  {
    if(pin[i]>='0' && pin[i]<='9')
      count++;
  }
   
  try{
      if(count!=6 || strlen(pin)>6)
      throw " Incoorect pin\n";

  }

  catch(const char *msg)
  {
    cout<<msg;
  }

  if(count==6 && strlen(pin)<=6)
  cout<<"CORRECT PIN-CODE\n"<<pin<<endl;

  return 0;

}
