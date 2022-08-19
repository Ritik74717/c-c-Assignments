#include<stdio.h>
int main()
{
   int a[5]={1,3,5,7,9};
   int b[5]={2,4,6,8,10};
   int c[10];
   int i=0,j=0,k=0;
   for(k=0;k<10;k++)
   {

       if(i>=5)
       {
           while(k<10)
           {
               c[k]=b[j];
               j++;
               k++;
               if(k==10)
                break;
           }
       }
       else if(j>=5)
       {

           while(k<10)
           {
               c[k]=a[i];
               i++;
               k++;
               if(k==10)
                break;
           }
       }
       
       else
       {

           if(a[i]<b[j])
           {
               c[k]=a[i];
               i++;
           }
           else
           {
             c[k]=b[j];
             j++;

           }
       }

   }

   for(i=0;i<10;i++)
   {
       printf("%d ",c[i]);
   }

}
