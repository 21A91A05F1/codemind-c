#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,c=0,d=0,k,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==1)
        c=1;
        for(j=2;j<arr[i];j++)
        {
        if(arr[i]%j==0)
        {
            c=1;
            break;
        }
        if(arr[i]>k)
        c=1;
        }
        if(c==0)
        d++;
        
    }
    
    printf("%d",d);
}