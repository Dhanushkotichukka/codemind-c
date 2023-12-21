#include<stdio.h>
int main()
{
    int b;
    float da,hr;
    scanf("%d",&b);
    da=b/100;
    hr=b/100;
    if(b<=10000)
    {
        printf("%.2f",b+(da*80)+(hr*20));
    }
    else if(b<=20000)
    {
        printf("%.2f",b+(da*90)+(hr*25));
    }
    else
    {
        printf("%.2f",b+(da*95)+(hr*30));
    }
}