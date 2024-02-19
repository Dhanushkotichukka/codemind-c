#include<stdio.h>
int main()
{
    char st[100];
    int i,j,k;
    scanf("%[^
]s",st);
    for(i=0;st[i]!=NULL;i++);
    int len=i;
    j=len-1;
    for(i=0;i<j;i++)
    {
        k=st[j];
        st[j]=st[i];
        st[i]=k;
        j--;
    }
    printf("%s",st);
}