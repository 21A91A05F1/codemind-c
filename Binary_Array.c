#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1 || arr[i]==0)
        {
            c++;
        }
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}