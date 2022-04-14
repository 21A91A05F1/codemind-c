#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=avg)
        c++;
    }
    printf("%d",c);
    
}