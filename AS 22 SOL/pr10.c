#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int *p;
  int i,n,max=0,min=-1;
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

  for(i=0;i<n;i++)
  {
      if(*(p+i) >= max)
        max = *(p+i);
  }

  min=*(p+0);

  for(i=1;i<n;i++)
  {
      if(min >= *(p+i))
      min = *(p+i);
  }
  printf("Max=%d\n",max);
  printf("Min=%d\n",min);
  free(p);

 return 0;


}
