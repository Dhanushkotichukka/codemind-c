#include<stdio.h>
#include<math.h>
int main()
{
    int a,i=0,p,r;
    scanf("%d",&a);
    p=pow(a,2);
    while(p!=0)
    {
        r=p%10;
        i=i+r;
        p=p/10;
    }
    if(i==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
