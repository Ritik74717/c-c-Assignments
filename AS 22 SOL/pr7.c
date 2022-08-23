#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int *p;
  int i,n,max=0;
  printf("enter number of elements\n");
  scanf("%d",&n);
  p=(int*)malloc(sizeof(int)*n);
  printf("enter %d values\n",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",(p+i));
  }
  printf("entered values are\n");
  for(i=0;i<n;i++)
  {
      printf("%d ",*(p+i));
  }
  printf("\n");

 printf("memory leak");


 return 0;


}
