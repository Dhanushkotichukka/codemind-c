#include<stdio.h>
int main()
{
    char st[100],ch;
    int i,num=0,n=0;
    scanf("%[^
]s",st);
    scanf(" %c",&ch);
    for(i=0;st[i]!=NULL;i++)
    {
        
        if(st[i]==ch)
        {
            n=1;
            printf("True
");
           printf("%d",num);
           break;
        }num=num+1;
    }
    if(n==0)
    {
        printf("False");
    }
    
}