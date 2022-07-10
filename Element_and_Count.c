#include<stdio.h>
int main()
{
    int n,arr[10000],i,d=0,flag=0,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       // d=0;
        flag=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j  )
            {
                flag++;
                arr[j]=-1;
               
            }
        }
       if(arr[i]!=-1)
       {
           printf("%d %d ",arr[i],flag);
       }
     }
    // printf("%d",s);
    
}