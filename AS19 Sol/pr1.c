#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20];
    int i,j,vowel=0;
    printf("Enter Five Strings\n");
    for(i=0;i<5;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;a[i][j];j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
            vowel++;
        }
        printf("%s==%d\n",a[i],vowel);
        vowel=0;
    }
    return 0;




}
