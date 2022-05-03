#include<stdio.h>
int main()
{
    int n,i,arr[100],d,j,s=0,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        d=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j && arr[i]>0)
            {
                d++;
                arr[j]=-1;
            }
        }
        if(k==d)
        {
            c++;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    printf("-1");
}