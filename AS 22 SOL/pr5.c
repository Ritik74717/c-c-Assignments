#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *p,x,sum=0;
   printf("enter array size\n");
   scanf("%d",&x);
   printf("Enter %d values\n",x);
   p=(int*)malloc(sizeof(int)*x);
   int i;
   for(i=0;i<x;i++)
   {
       scanf("%d",p+i);
   }
   printf("\n");
   printf("Entered values\n");
   for(i=0;i<x;i++)
   {
       printf("%d ",*(p+i));
       sum =sum + (*(p+i));
   }
   printf("\n");

   printf("Sum = %d\n",sum);
   free(p);

   return 0;



}
