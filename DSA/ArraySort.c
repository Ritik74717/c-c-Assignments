#include<stdio.h>
int main()
{
    int a[50],i,j,temp,n;
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

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

    printf(" Sorted Entered Array is\n");
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }

    return 0;

}
