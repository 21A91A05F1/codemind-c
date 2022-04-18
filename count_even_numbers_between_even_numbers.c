#include<stdio.h>
int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    int i,c1=0,a,b;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            a=i;
            break;
        }
    }
    for(i=n-1;i>1;i--)
    {
        if(arr[i]%2==0)
        {
            b=i;
            break;
        }
    }
    for(i=a+1;i<b;i++)
    {
        if(arr[i]%2==0)
        {
            c1++;
        }
    }
    printf("%d",c1);
}
    