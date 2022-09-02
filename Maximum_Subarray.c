#include<stdio.h>
int main()
{
    int n,i,j,s,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=arr[j];
            if(max<s)
            {
                max=s;
            }
        }
    }
    printf("%d",max);
}