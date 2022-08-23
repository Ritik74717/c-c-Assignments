#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *p;
  int i,n;
  printf("enter total number of character in a string\n");
  scanf("%d",&n);
   p=(char*)malloc(sizeof(char)*n);
  printf("enter your name\n");
  fflush(stdin);
  gets(p);
  printf("%s",p);
  free(p);




   return 0;



}
