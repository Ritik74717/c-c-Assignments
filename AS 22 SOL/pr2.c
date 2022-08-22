#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *p,x,sum=0;
   float avg;
   printf("enter array size\n");
   scanf("%d",&x);
   printf("Enter %d values\n",x);
   p=(int*)calloc(x,sizeof(int));
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
   avg=(float)sum/x;
   printf("Average = %f\n",avg);
   free(p);
  
   return 0;



}
