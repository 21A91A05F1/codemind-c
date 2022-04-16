#include<stdio.h>
int main()
{
    int i,j,n,k,c=0,c1=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]>=k)
        {
            if(arr[i]==1)
            {
                c=1;
            }
            if(arr[i]==0)
            {
                c=1;
            }
            for(j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            c1++;
        }
        
    }
    printf("%d",c1);
}