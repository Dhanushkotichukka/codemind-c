#include<stdio.h>
int main()
{
    int a,b,sum1=0,sum2=0,i,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(a==sum2 && b==sum1)
    {
        printf("Amicable");
    }
    else
    {
         printf("Not Amicable");
    }
}