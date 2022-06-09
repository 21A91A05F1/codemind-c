#include<stdio.h>
int main()
{
    int n,arr[100],i,max=0,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d",arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
       // max=arr[0];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(j=1;j<=max+1;j++)
    {
        for(i=0;i<n;i++)
        {
            c=0;
            if(arr[i]==j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d",j);
            break;
        }
    }
    
}