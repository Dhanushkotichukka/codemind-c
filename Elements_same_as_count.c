#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j,m=0;
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
         printf("%d ",k);
         arr[i]=0;
         m=1;
       }
    }
    if(m==0) printf("-1");
}