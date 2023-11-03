#include<stdio.h>
int main()
{
    int x,r,b=0;
    scanf("%d",&x);
    for(;x!=0;)
    {
    r=x%10;
    b=b+r;
    x=x/10;
        
    }
    printf("%d",b);
}