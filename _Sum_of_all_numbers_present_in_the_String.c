#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,sum=0;
    for(i=0;st[i]!=NULL;i++)
    { 
         if(st[i]>='0'&& st[i]<='9')
        {
            sum=sum+st[i]-'0';
        }
    }printf("%d",sum);
}