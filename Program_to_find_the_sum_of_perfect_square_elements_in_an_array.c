#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0;
    int  res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    
  
    for(i=0;i<n;i++)
    {
        res=sqrt(arr[i]);
        if(res*res==arr[i])
        {
            sum=sum+arr[i];
        }
        //printf("%d",sum);
        //return 0;
    }
    printf("%d",sum);
}