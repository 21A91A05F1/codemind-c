#include<stdio.h>
int main()
{
    int n,arr[1000],i,c=0,a,b;
    scanf("%d",&n);
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
    for(i=n-1;i>0;i--)
    {
        if(arr[i]%2==0)
        {
            b=i;
            break;
        }
    }
    for(i=a+1;i<b;i++)
    {
        if(arr[i]%2!=0)
        c++;
    }
    printf("%d",c);

}
