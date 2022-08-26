#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    if(p==NULL)
        {
            printf("Memory allocation Failed\n");
           return 0;
        }
    printf("Enter %d values\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
  free(p);

    return 0;
}
