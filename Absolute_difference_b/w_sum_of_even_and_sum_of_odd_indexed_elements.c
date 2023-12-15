#include<stdio.h>
int main()
{
    int n,i,sumo=0,sume=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            sume+=arr[i];
        }
        else
        {
            sumo+=arr[i];
        }
    }
    int dif;
    if(sumo>sume)
    dif=sumo-sume;
    else
    dif=sume-sumo;
    printf("%d",dif);
}