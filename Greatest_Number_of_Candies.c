#include<stdio.h>
int main()
{
    int n,i,k,max=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+k>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}