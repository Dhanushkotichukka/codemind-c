#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i;
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]<='Z' && st[i]>='A')
        {
            st[i]=st[i]+32;
        }
    }printf("%s",st);
}