#include<stdio.h>
int main()
{
    float ba,hr,da;
    scanf("%f%f%f",&ba,&hr,&da);
    float pf=(ba*12)/100.0;
    float x=ba+da+hr+pf;
    printf("%.2f
%.2f",pf,x);
}