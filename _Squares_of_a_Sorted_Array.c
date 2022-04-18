#include<stdio.h>
int main()
{
    
    int n,temp,a1[10000],a2[10000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a1[i]);
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i]*a1[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a2[i]>a2[j])
            {
                temp=a2[i];
                a2[i]=a2[j];
                a2[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a2[i]);
    
}