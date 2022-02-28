#include<stdio.h>
int main()
{
    int x[20],n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        if(x[i]!=0)
        {
            x[j]=x[i];
            j++;
        }
    }
    for(i=j;i<n;i++)
    {
    x[i]=0;
       
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    
    
    
}