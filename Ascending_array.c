#include<stdio.h>
int main()
{
    int i,n,j,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=i+1;j++)
        {
            if(arr[i]<arr[j])
            c++;
        }
    }
    
    if(c==n)
    printf("yes");
    else
    printf("no");
}