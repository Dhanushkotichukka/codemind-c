#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    float pp=sp-cp;
    printf("%.2f",(pp/cp)*100);
}