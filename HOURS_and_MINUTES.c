#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x/60;
    int z=x%60;
    printf("%d Hour(s) %d Minute(s)",y,z);
}