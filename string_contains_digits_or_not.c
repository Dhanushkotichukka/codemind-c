#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int j=0;
    for(j=0;j<n;j++)
    {
    char st[100];
    scanf(" %[^
]s",st);
    int i,k=0;
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]<='9' && st[i]>='0')
        {
           k=1;
           break;
        }
    }
    if(k==1)printf("Yes
");
    else printf("No
");
    }
}