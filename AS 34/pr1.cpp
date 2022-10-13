#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("F:/file/p1.txt");

    if(fout)
    {
         cout<<"File created Successfully\n";
    }
    else{
        cout<<"File not created\n";
    }
    return 0;
    
}
