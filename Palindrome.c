#include<stdio.h>
int main()
{
    int n,i,k,m=0;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        i=n%10;
        m=m*10+i;
        n=n/10;
    }
    if(m==k)
    printf("True");
    else
    printf("False");
}