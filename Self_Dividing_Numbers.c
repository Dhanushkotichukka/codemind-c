#include<stdio.h>
int main()
{
    int n,m,i,k,c=0,u=0,a;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        k=i;
        u=0,c=0;
        while(k!=0)
        {
            a=k%10;
            if(a!=0 && i%a==0)
            {
                c++;
            }
            u++;
            k=k/10;
        }
        if(u==c)
        printf("%d ",i);
    }
}