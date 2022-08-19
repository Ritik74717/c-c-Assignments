#include<stdio.h>
int main()
{
    int a[3][3]={1,0,6,
                 0,7,0,
                 0,5,0
                };
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=0)
                count++;


        }
    }
    if(count>(9/2))
        printf("not sparse");
    else
        printf("sparse");
}
