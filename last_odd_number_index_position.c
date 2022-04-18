#include<stdio.h>
int main()
{
    int n,arr[10000],i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(i=n;i>0;i--)
    {
        if(arr[i]%2!=0)
        {
            c=i-1;
            break;
        }
    }
    printf("%d",c);
    
    
}
