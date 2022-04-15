#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100][100],i,j,sum1=0,sum2=0;
     int res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum1=sum1+arr[i][j];
             if (i+j==n-1)
            {
             sum2 =sum2+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",sum1);
    printf("Secondary Diagonal:%d",sum2);
    
}
