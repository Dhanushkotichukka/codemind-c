#include<stdio.h>
int main()
{
    int p,ch,b,m,c,sum;
    scanf("%d%d%d%d%d",&p,&ch,&b,&m,&c);
    sum=p+ch+b+m+c;
    float per ;
    per=(sum/500.0)*100;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
    
    
    
    
    
    

}