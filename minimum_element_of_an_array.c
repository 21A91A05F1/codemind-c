#include<stdio.h>
int main()
{
    int n,i,arr[100],min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
}