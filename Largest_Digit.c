#include<stdio.h>
int main()
{
    int a,i,k,r=0;
    scanf("%d",&a);
    while(a!=0)
    {
        k=a%10;
        if(r<k)
        {
            r=k;
        }
        a=a/10;
    }
    printf("%d",r);
}