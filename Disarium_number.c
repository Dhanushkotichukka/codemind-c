#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k,i,j,z,l,count=0,sum=0,s;
    scanf("%d",&a);
    s=a;
    l=a;
    while(a!=0)
    { a=a/10;
      count++; 
    }
    while(l>0)
    {    
        k=l%10;
        sum+=pow(k,count);
        l=l/10;
        count--;
    }
    if(sum==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}