#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],c=0,r=0;
    for(i=0;i<n;i++)
    {  
        r++;
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            c++;
        }
        
    }
    if(c==r)    printf("True");
    else        printf("False");
}