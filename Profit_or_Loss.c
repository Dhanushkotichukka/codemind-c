#include<stdio.h>
int main()
{
    int x,y,k;
    scanf("%d
%d",&x,&y);
    k=y-x;
    if(k==0)
    printf("No Profit and No Loss");
    else if (k>0)
    printf("Profit");
    else 
    printf ("Loss");
}