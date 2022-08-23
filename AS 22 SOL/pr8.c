Example 1:-

#include<stdio.h>

int* f1()
{
  int a;
  .....
    ....
    return a;
}
void fun()
{
  int *p;
  p=f1();  // p becomes dangling pointer
}

//Example 2:-
#include<stdio.h>
int main()
{
  int *p;
  p=(int*)malloc(sizeof(int));
  .....
    .....
    free(p); // p becomes dangling pointer;
}
