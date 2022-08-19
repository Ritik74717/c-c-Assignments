#include<stdio.h>
#include<string.h>
int main()
{
   char a[10];
   char b[3][20]={"ritik","aniket","satyam"};
   int i,j,flag=0;
   printf("Enter your string\n");
   gets(a);
   printf("\n");

   for(i=0;i<3;i++)
   {



           if(strcmp(a,b[i])==0)
           {
                printf("valid\n");
                printf("%s\n",a);
                flag=1;

           }

   }

   if(flag==0)
    printf("not valid");
    else
    {
        int i,n,fact=1;
        printf("   ------------------------\n");
        printf("   Factorial Calculation   \n");
        printf("Enter a Number\n");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            fact=fact*i;
        }
        printf("Factorial is %d\n",fact);
        printf("Than you !");


    }

    return 0;




}
