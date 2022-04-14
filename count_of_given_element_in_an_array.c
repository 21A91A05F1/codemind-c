#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        c++;
    }
    printf("%d",c);
}