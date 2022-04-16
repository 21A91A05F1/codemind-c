#include<stdio.h>
int main()
{
    int n,i,j,arr[100],flag=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            c++;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    printf("-1");
}