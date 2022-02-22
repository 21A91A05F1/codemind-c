#include<stdio.h>
int main()
{
    int n,i,j,arr[100],count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j] && i!=j)
            count++;
            
        }
         printf("%d ",count);
    }
    return 0;
   
}