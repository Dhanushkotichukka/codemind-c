#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x/365;
    int z=x-(y*365);
    int a=z/7;
    printf("%d
%d",y,a);
    
}
