#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=sum/n,c=0;
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            c=1;
            break;
        }
        
    }
    if(c==1)    printf("True");
    else        printf("False");
}