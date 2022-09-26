#include<stdio.h>
int main()
{
   int a[50],i,j,n,e;
   printf("Enter Size Of Array\n");
   scanf("%d",&n);
   printf("Enter %d Elements\n",n);
   for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("Entered Elements are:\n");

  for(i=0;i<n;i++)
 {
   printf("%d ",a[i]);
 }
 printf("\n");

 printf("Enter element You want to search\n");
 scanf("%d",&e);
 for(i=0;i<n;i++)
 {
     if(a[i]==e)
     {
         printf("Your element is %d position");
         break;
     }

 }
 if(i==n)
    printf(" Element not present\n");
    return 0;

}
