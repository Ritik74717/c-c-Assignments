#include<iostream>
#include<cstring>
using namespace std;
class String
{
    private:
          char *a;
          int size;
    public:
       String()
       {
          a=(char *)malloc(sizeof(char));
          size = 1;
       }

       void set(char *s)
       {
          size = strlen(s);
          a = (char*)malloc(size+1);
          strcpy(a,s);
       }
       void display()
       {
        cout<<a<<endl;
       }
       
       String  operator+(String str)
       {
         String s;
        s.a= strcat(a,str.a);
        return s;

       }

   
};

int main()
{
    String s1,s2,s3;
    s1.set("hello");
    s2.set("world");
    s3 = s1+s2;
    s3.display();
    return 0;
}
