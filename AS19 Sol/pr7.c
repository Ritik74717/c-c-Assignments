#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[]="253.134.12.13";
    char *a = strtok(ip,".");
    int flag=0;
    while(a!=NULL)
    {
        int x=atoi(a);
        if((x>=0)&&(x<=255))
        {

            printf("%d ",x);
             flag=1;
            a=strtok(NULL,".");

        }
        else
        {
            break;
        }


    }
    if(flag==0)
        printf("not valid ip");

    return 0;
}
