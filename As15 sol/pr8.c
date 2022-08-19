#include<stdio.h>
int main()
{
    int i,a[10]={5,4,6,7,7,8,9,8,9,10};
     int freq[20]={0};
    for(i=0;i<10;i++)
    {
        freq[a[i]]++;
    }
    for(i=0;i<20;i++)
    {
        if(freq[i]==1)
            printf("%d\n",i);
    }
}
