#include<stdio.h>
#include<string.h>
int main()
{
   char a[3][20];
   int i,j,flag=0;
   printf("Enter your string\n");
   for(i=0;i<3;i++)
   {
       gets(a[i]);
   }
   printf("\n");

   for(i=0;i<3;i++)
   {

           if(strchr(a[i],'@')!=0)
           {
                printf("valid\n");
                printf("%s\n",a[i]);
                flag=1;

           }
   }

   if(flag==0)
    printf("not valid");

    return 0;




}
