#include<stdio.h>
int main()
{
    int n,m,arr[1000][1000],sum=0,i,j;
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
        for(j=0;j<m;j++)
        {
            if(i!=0 && i!=n-1 && j!=0 && j!=m-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}