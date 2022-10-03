#include<iostream>
#include<math.h>
using namespace std;

int divide(int divident,int divisor)
{

    if(divident==0)
        return 0;
    if(divisor==0)
    {
        cout<<"Divide by zero impossible\n";
        return 0;
    }

    int sign = (divident<0)^(divisor <0);
    divident = abs(divident);
    divisor =  abs(divisor);

    if(divisor==1)
        return ((sign==0) ? divident:-divident);
    int ans = exp(log(divident) - log(divisor)) + 0.0000000001;

    return ((sign==0)? ans : -ans);


}

int main()
{
   int  num[]={1,-1,0,-3,3},i;
   int ans[10],size=5,countZero= 0 , mul =1;

   for(i=0;i<size;i++)
   {
       if(num[i]==0)
        countZero++;
       else
        mul = mul*num[i];

   }

   for(i=0;i<size;i++)
   {
       if(countZero>1)
        {
            ans[i]=0;
        }

       else if(countZero==1)
       {

           if(num[i]!=0)
           {
               ans[i]=0;
           }
           else
            ans[i]= mul;
       }

       else
       {
           ans[i]=divide(mul,num[i]);
       }
   }

   for(i=0;i<size;i++)
   {
       cout<<ans[i]<<" ";
   }

    return 0;
}
