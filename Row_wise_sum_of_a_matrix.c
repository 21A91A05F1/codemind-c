#include<stdio.h>
int main()
{
    int r,c,arr[100][100]={},i,j,s1=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
{
    s1=0;
    for(j=0;j<c;j++)
{
   
    
    s1=s1+arr[i][j];
    
}
printf("%d ",s1);
}
    
}