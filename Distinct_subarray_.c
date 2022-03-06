#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,count=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        sum=0;
        {
            for(j=i;j<=n;j++)
            {
                sum=sum+j;
                {
                    if(sum%2!=0)
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}