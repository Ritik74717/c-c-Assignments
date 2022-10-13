#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    
    fout.open("F:/file/p1.txt");

    if(fout)
    {
         cout<<"File created Successfully\n";
         fout<<"Hello Ritik kaushik from sambhal";
    }
    else{
        cout<<"File not created\n";
    }

     fin.open("F:/file/p1.txt");
     fin.seekg(0,ios_base::beg);    

    char ch;
    int i,c=0,sp=0;
    while(!fin.eof())
    {
        fin.get(ch);
        if((ch>63 && ch<91) ||(ch>96 && ch<123))
       { 
        c++;
       }
        else
        {
        if(ch==' ')
        sp++;
        }
    }
    cout<<"Number of character is "<<c<<endl;
    cout<<"Number of spaces is "<<sp<<endl;
   
    fin.close();
    fout.close();
    return 0;
    
}
