#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j] )
                {
                    c++;
                    
                }
            }
        }
        if(c==1)
        {
            printf("%d ",arr[i]);
            break;
        }
        
    }
    
}