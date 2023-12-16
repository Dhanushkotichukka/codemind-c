#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int se,co=0;
    scanf("%d",&se);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(se==arr[i][j])
            {
                co++;
                break;
            }
        }
    }
    if(co==1)  printf("1");
    else     printf("0");
    
    
}