#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,count=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++)
    {
      d=  (int)log10(arr[i])+1;
      if(d%2==0)
      {
          count++;
      }
    }
    printf("%d",count);
    
    
}