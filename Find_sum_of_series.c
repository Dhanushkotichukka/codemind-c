#include<stdio.h>
int main()
{
    int n;
    float i,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k+(1/i);
    }
    printf("%.2f",k);
}