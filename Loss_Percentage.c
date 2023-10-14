#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    float lp=cp-sp;
    printf("%.2f ",(lp*100)/cp);
}