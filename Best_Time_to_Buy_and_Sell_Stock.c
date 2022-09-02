#include<stdio.h>
int main()
{
    int n,i,j,k,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                k=arr[j]-arr[i];
                if(max<k)
                {
                    max=k;
                }
            }
        }
    }
    printf("%d",max);
}