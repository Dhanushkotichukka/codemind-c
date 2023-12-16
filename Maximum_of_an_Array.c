#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
    {
		scanf("%d",&arr[i]);
	}
	int r=arr[0];
	for(i=1;i<n;i++)
    {
		if(arr[i]>r)
		{
			r=arr[i];
		}
		
	}
	printf("%d",r);
}