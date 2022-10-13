#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ifstream fin;
   fin.open("F:/file/pr1.txt");
   ofstream fout;
   fout.open("F:/file/pr2.txt");

   char ch;
   while(!fin.eof())
   {
      fin.get(ch);
      fout<<ch;

   }


   cout<<"Data copy Successfully";

   fin.close();
   fout.close();

   return 0;


}
