#include<stdio.h>
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    if(n%2==1)
    printf("0");
}