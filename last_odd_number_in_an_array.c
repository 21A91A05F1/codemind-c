#include<stdio.h>
int main()
{
    int i,n,c=0,k;
    scanf("%d",&n);
    int arr[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
            a[k]=arr[i];
            k++;
        }
    }
    printf("%d",a[c-1]);
}