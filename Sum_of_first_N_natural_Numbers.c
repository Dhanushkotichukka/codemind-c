#include<stdio.h>
int main()
{
    int x,y=0,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
      y+=i;  
    }
    printf("%d",y);
}

