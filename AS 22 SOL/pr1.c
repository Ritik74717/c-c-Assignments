#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p,c;
    int i=0,j=1;
    p=(char*)malloc(sizeof(char));
    printf("Enter a string\n");
    while(c!='\n')
    {
        c=fgetc(stdin);
        j++;
        p=(char*)realloc(p,j*sizeof(char));
        p[i]=c;
        i++;



    }
    p[i]='\0';
    printf("Entered string is %s",p);
    free(p);
    return 0;
}
