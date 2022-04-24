#include<stdio.h>
int main()
{
    int n,arr[10000],i,j,d=0,c=0,flag=0,k=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            
            if(arr[i]==arr[j] && i!=j && arr[i]>0)
            {
                c++;
                arr[j]=-1;
                
            }
        }
        if(c==arr[i])
        {
            flag=1;
          printf("%d ",arr[i]);
           
        }
        
        
    }
    if(flag==0)
    printf("-1");
    
    
}