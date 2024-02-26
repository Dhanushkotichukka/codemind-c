#include<stdio.h>
int main()
{
    char s[10];
    int i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=0;i++)
    {
        if(i==6)
        {
           printf("%c",s[i]);
        }
    }
}