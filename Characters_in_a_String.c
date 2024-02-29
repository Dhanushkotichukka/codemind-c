#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,sum=0;
    for(i=0;st[i]!=NULL;i++)
    {
        
        sum+=1;
    }printf("%d",sum);
}