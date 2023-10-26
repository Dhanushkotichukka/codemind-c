#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x/60;
    int a=x%60;
    int z=y/60;
    int b=y%60;
    printf("H:M:S-%d:%d:%d",z,b,a);
    
    
}