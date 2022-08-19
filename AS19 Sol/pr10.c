#include<stdio.h>
#include<string.h>
int main()
{
   char a[10];
   char b[3][20]={"ritik","aniket","satyam"};
   int c[3]={1234,7417,9058};
   int i,j,flag=0,pass=0,x,count=0;
   printf("Enter your user name\n");
   gets(a);
   printf("enter your 4 digits password\n");
   scanf("%d",&x);
   printf("\n");
   for(i=0;i<3;i++)
   {
       if(x==c[i])
       {
           pass=1;
           break;
       }
   }

   for(i=0;i<3;i++)
   {



           if(strcmp(a,b[i])==0 && pass==1)
           {
                printf("valid user name and password\n");
                printf("%s\n",a);
                flag=1;

           }

   }

   if(flag==0)
   {
        printf("Invalid user name or password\n");

   }

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
        printf("Than you !\n\n");


    }


     return 0;
}







