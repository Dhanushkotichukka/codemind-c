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
	int row;
	for(i=0;i<r1;i++)
    {
    	row=0;
    	for(j=0;j<c1;j++)
    	{
    		row+=ar1[i][j];
    		
		}
		printf("%d ",row);
		
	}
    
}