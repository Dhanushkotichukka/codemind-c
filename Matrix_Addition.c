#include<stdio.h>
int main()
{
    int r1,c1,i,j;
    scanf("%d%d",&r1,&c1);
    int ar1[r1][c1];
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		scanf("%d",&ar1[i][j]);
		}
	}
	int r2,c2;
	scanf("%d%d",&r2,&c2);
	int ar2[r2][c2];
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&ar2[i][j]);
			
		}
	}
	int ar3[i][j];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			ar3[i][j]=ar1[i][j]+ar2[i][j];
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",ar3[i][j]);
		}
		printf("
");
	}
    
}