#include<stdio.h>
int main()
{
    int n,arr[10000],i,d=0,flag=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       // d=0;
        flag=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j  )
            {
                flag=1;
               
            }
        }
        if(flag==0)
        {
            if(arr[i]%2==1)
            d++;
        }
     }
     printf("%d",d);
    
}

