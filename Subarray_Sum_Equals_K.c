#include<stdio.h>
int main()
{
    int n,k,i,j,c=0,s=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=arr[j];
            if(s==k)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
}