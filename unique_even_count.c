#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,s,j,d=0;
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
       if(arr[i]%2==0)
       d++;
        
    }
    printf("%d",d);
}