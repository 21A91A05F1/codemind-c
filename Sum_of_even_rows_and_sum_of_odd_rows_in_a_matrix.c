#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,c,sum1=0,sum2=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i%2==0 )
            {
                sum1=sum1+arr[i][j];
            }
            if(i%2!=0 )
            {
                sum2=sum2+arr[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
    
}