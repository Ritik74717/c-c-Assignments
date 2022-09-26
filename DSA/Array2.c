#include<stdio.h>
int main()
{
    int a[50],i,j,n,p,v;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered Elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter element you want to insert and position number\n");
    scanf("%d%d",&v,&p);
    for(i=n-1;i>=p-1;i--)
    {
        a[i+1] = a[i];

    }
     a[p-1] = v;

    printf("Final  Elements are\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
