#include<stdio.h>
int main()
{
    int i,n,s1=0,s2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1=s1+arr[i];
    }
    for(i=(n/2);i<n;i++)
    {
        s2=s2+arr[i];
    }
    printf("%d
%d",s1,s2);
}