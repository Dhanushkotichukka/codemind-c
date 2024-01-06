#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,count=0;
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}