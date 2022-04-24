#include<stdio.h>
int main()
{
    int n,arr[10000],i,j,d=0,c=0,flag=0,max=0,min=99;
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
           
       
       
            if(max<arr[i])
            {
                max=arr[i];
            }
             if(min>arr[i])
            {
                min=arr[i];
            }
        
    }
    }
    if(flag==1)
    printf("%d %d",min,max);
    else
    printf("-1");
   
}