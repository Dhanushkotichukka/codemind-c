#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    k=a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+k);
        }
        k--;
        printf("
");
    }
}