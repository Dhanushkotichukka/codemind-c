#include<stdio.h>
int main()
{
    int n,g=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
    }
    if(n%5==0)
    {
        printf("Plang");
    }
    if(n%7==0)
    {
        printf("Plong");
    }
    if(n%3!=0 && n%5!=0 &&n%7!=0)
    {
    printf("%d",n);
    }
}