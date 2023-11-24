#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==1  || x>=6 && x<=20)
    {
        printf("weird");
    }
    else if(x>=2 && x<=5 || x<=20)
    {
        printf("not weird");
    }
    else 
    {
        printf("not weird");
    }
     
}