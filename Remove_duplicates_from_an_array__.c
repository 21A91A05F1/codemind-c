#include<stdio.h>
int main()
{
    int n,arr[100],i,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j )//&& arr[i]>0)
            {
            
                arr[j]=-100;
                //break;
            }
        }
        if(arr[i]!=-100)
        {
            printf("%d ",arr[i]);
        }
    }
}