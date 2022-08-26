#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
   {
        int n,i,s=0,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        s+=arr[i];
    }
    res=((n)*(n+1))/2;
    printf("%d
",res-s);
        t--;
    }
}