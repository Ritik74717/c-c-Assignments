#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ofstream fout;
   fout.open("F:/file/p1.txt",ios::app);

   if(fout)
   {
    cout<<"File created Successfully\n";
    fout<<" Currently Pursuing MCA AT GLA University Mathura";
   }
   else{
    cout<<"File not created\n";
   }

   fout.close();
   return 0;

}
