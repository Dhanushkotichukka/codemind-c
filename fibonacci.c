#include<stdio.h>
int main()
{
    int x,a=0,b=1,c,i;
    scanf("%d",&x);
    printf("%d %d ",a,b);
    for(i=2;i<x;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}