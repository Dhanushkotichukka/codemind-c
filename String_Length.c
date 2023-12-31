#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int k=strlen(st);
    printf("%d",k);
}