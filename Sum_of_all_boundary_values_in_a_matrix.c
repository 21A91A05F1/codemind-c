#include<stdio.h>
int main()
{
    int n,m,arr[100][100],sum=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}