#include<stdio.h>
int main()
{
    int t,s,e,i;
    scanf("%d%d%d",&t,&s,&e);
    for(i=s;i<=e;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}