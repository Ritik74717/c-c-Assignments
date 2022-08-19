#include<stdio.h>
#include<string.h>
int main()
{
   char a[3][20],t[20];
   int i,j;
   printf("Enter cities name\n");
   for(i=0;i<3;i++)
   {
       gets(a[i]);
   }
   printf("\n");
   for(i=0;i<2;i++)
   {
       for(j=i+1;j<3;j++)
       {
           if(strcmp(a[i],a[j])>0)
           {
               strcpy(t,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],t);
           }
       }
   }
   for(i=0;i<3;i++)
    printf("%s\n",a[i]);

    return 0;




}
