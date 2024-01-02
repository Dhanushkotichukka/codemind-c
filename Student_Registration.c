#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int d;
        d=b-a;
        if(d>=c)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        
    }
}