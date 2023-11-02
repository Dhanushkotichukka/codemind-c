#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x%10;
    for(;x>9;)
    {
       x=x/10;
       
    }
    printf("%d",x+y);
}