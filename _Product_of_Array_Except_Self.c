#include<stdio.h>
int main()
{
    int n,mul=1,i,j;
    scanf("%d",&n);
    int arr[1000],arr1[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        mul=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                mul=mul*arr[j];
               
            }
             
        }
      arr1[i]=mul; 
      //printf("%d",mul);
    }
   for(i=0;i<n;i++)
    printf("%d ",arr1[i]);
}