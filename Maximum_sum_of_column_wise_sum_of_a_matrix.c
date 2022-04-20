#include<stdio.h>
int main()
{
    int r,c,arr[1000][1000],i,j,s1=0,max=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
{
    s1=0;
    for(i=0;i<r;i++)
{
   
   // max=0;
    s1=s1+arr[i][j];
    if(max<s1)
    {
        max=s1;
    }
    
}
 
}
printf("%d",max);
    
}