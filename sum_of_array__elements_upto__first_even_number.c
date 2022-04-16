#include<stdio.h>
int main()
{
    int n,i,arr[1000],sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
    {
        k=i;
        break;
    }
    }
    
    for(i=0;i<k;i++)
    {
          sum=sum+arr[i];
            
        
    }
    printf("%d",sum);
}