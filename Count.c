#include<stdio.h>
int main()
{
    int n,arr[100], ec=0,oc=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    if(arr[i]%2==0)
    {
        ec++;
    }
    else
    {
        oc++;
    }
    }
    printf("%d %d",ec,oc);
}