#include<stdio.h>
int main()
{
    int a,b,c,n,sum;
    printf("Enter a Number\n");
    scanf("%d",&n);
    a=n;
     //121
    
        b=n%10; //1
        b= b*100;
        n=n/10; //12
        c=n%10; //2
        c=c*10;
        n=n/10; //1
        sum = b+c+n;
        if(sum==a)
        printf("True\n");
        else
        printf("False\n");
    
        return 0;



    
}
