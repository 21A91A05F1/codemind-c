#include<stdio.h>
int main()
{
    int a,b,arr[10000],i,n,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        
        if(arr[i]<a || arr[i]>b)
        {
           c++;
           printf("%d ",arr[i]);
        }
    }
    if(c==0)
    printf("-1");
    
    
}