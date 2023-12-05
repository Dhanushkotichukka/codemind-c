#include<stdio.h>
int main()
{
    int a,x=0,y=1,z,i,c=0;
    scanf("%d",&a);
    if(a==x || a==y)
    {
        printf("True");
    }
    else
    {
        for(i=2;i<a;i++)
        {
            z=x+y;
            if(a==z)
            {
                c++;
            }
            x=y;
            y=z;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}