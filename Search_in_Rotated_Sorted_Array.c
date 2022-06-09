#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,k,c=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            c=1;
            printf("%d",i);
        }
        
    }
    if(c==0)
    printf("-1");
}
