#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i,sum1=0,sum2=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum1=sum1+arr[i];
        else
        sum2=sum2+arr[i];
        
    }
    res=abs(sum1-sum2);
    printf("%d",res);
}