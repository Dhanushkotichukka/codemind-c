#include<stdio.h>
int main()
{
    int i,flag=0;
    char st1[100],st2[100];
    scanf("%[^
]s",st1);
    scanf(" %[^
]s",st2);
    for(i=0;st1[i]!=NULL;i++)
    {
        if(st1[i]!=st2[i])
        {
            flag=1;
        }
    }
    if(flag==0) printf("Strings are Equal");
    else printf("Strings are not Equal");
}