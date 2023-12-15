#include<stdio.h>
int main()
{
    int n,sumo=0,sume=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sumo+=arr[i];
        }
        else
        {
            sume+=arr[i];
        }
    }
    int res;
    if(sumo>sume)
    {
       res=sumo-sume;
    }
    else
    {
        res=sume-sumo;
    }
    printf("%d",res);
}