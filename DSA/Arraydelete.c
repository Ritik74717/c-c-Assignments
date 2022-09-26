#include<stdio.h>
int main()
{
    int a[50],i,j,temp,n,p;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    printf("Enter %d Elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Your Entered Array is\n");
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
     printf("\n");
    printf("Enter index number you want to delete\n");
    scanf("%d",&p);
    if(p>=n+1)
        {
            printf("WRONG POSITION ENTERED\n");
        }
    else
    {
        for(i=p-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
         printf("Final  Elements are\n");
       for(i=0;i<n-1;i++)
       {
        printf("%d ",a[i]);
       }
    }



     return 0;
}
