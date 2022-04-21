#include<stdio.h>
int main()
{
    int n,arr[10000],a1[100000],i,d=0,rev=0,temp,c=0;
    int sum=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        rev=0;
        d=0;
        temp=arr[i];
        while(arr[i]>0)
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
            sum=sum+d;
        }
       
    }
    printf("%d",sum);
    
    
}