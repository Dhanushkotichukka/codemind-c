#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j,min=0,max=0;
    for(i=0;i<n;i++)
    {  int c=0,k=arr[i];
       for(j=0;j<n;j++)
       {
           if(k==arr[j])
           {
               c=c+1;
           }
       }
       if(c==k)
       {
         if(arr[i]<min || min==0)
         min=arr[i];
         if(arr[i]>=max)
         max=arr[i];
       }
    }
    if(min==0)
    printf("-1");
    else 
    printf("%d %d",min,max);
}