#include<stdio.h>
int main()
{
    int r1,c1,i,j,sum=0;
    scanf("%d%d",&r1,&c1);
    int ar1[r1][c1];
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		scanf("%d",&ar1[i][j]);
    		sum+=ar1[i][j];
    		
		}
	}
	printf("%d",sum);
    
}