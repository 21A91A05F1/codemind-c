#include<stdio.h>
int main()
{
    int n,arr[1000],c1=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(i=n;i>0;i--)
    {
        if(arr[i]%2==0)
        {
            c1=i-1;
            break;
        }
    }
    printf("%d",c1);
}