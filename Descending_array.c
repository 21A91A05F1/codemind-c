#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            c++;
        }
    }
    if(c>0)
    printf("no");
    else
    printf("yes");
}