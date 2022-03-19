#include<stdio.h>
int main()
{
    int arr[20],n,i,j,count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                count++;
            }
        }
        if(count>n/2)
        {
            printf("%d",arr[i]);
            return 0;
        }
    }
}