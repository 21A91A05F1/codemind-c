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
    for(j=0;j<c;j++)
{
    s1=0;
    for(i=0;i<r;i++)
{
   /* if(j==0)
    {
        s1=s1+arr[i][j];
    }
    else if (j==1)
    s2=s2+arr[i][j];
    else if(j==2)
    s3=s3+arr[i][j];*/
    
    s1=s1+arr[i][j];
    
}
printf("%d ",s1);
}
    
}