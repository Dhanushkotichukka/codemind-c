#include<stdio.h>
int main()
{
    float x,k;
    scanf("%f",&x);
    if(x<199)
    k=x*1.20;
    else if(x>200 && x<400)
    k=x*1.50;
    else if(x>400 && x<600)
    k=x*1.80;
    else 
    k=x*2.00;
    if(k>400)
    printf("%.2f",k+(k*15)/100);
    else
    printf("%.2f",k+100);
    
}