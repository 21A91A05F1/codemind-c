#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,s,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1 && arr[i]%2==1)
        {
            s=s+arr[i];
        }
        
    }
    printf("%d",s);
}