#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
      ifstream fin1,fin2;
      fin1.open("F:/file/pr3.txt");
       fin2.open("F:/file/pr2.txt");
      ofstream fout1,fout2;
      fout1.open("F:/file/pr4.txt");

      char ch;
      while(fin1.eof()==0)
      {
          getline(fin1,ch);
          fout<<ch;
      }

      while(!fin2.eof()==0)
      {
          getline(fin2,ch);
          fout<<ch;
      }
      fin1.close();
      fin2.close();
      fout.close();
      return 0;


}
