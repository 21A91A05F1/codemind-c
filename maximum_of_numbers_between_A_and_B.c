#include<stdio.h>
int main()
{
    int a,b,arr[100],i,n,max=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
      //  max=arr[0];   
        if(arr[i]>=a && arr[i]<=b)
        {
            if(max<arr[i])
            {
                c++;
                max=arr[i];
            }
        }
    }
    if(c>0)
    printf("%d",max);
    else
    printf("-1");
    
}