#include<stdio.h>
int main()
{
    int n,arr[100],i,t,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]>t)
       {
           sum=sum+2;
       }
        else
        {
           sum=sum+1;
        }
    }
    printf("%d",sum);
   
}