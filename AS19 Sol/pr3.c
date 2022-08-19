#include<stdio.h>
#include<string.h>
int main()
{
   char a[3][20];
   int i;
   printf("Enter cities name\n");
   for(i=0;i<3;i++)
   {
       gets(a[i]);
   }
   printf("\n");

   for(i=0;i<3;i++)
    printf("%d == %s\n",i,a[i]);

    return 0;




}
