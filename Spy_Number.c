#include<stdio.h>
int main()
{
    int x,y,a=0,b=1;
    scanf("%d",&x);
    while(x!=0)
    {
        y=x%10;
        a=a+y;
        b=b*y;
        x=x/10;
    }
    if(a==b)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}