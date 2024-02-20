#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,c=0;
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]=='a'|| st[i]=='i'||st[i]=='o'|| st[i]=='e'|| st[i]=='u')
        {
           c++; 
        }
    }printf("%d",c);
}