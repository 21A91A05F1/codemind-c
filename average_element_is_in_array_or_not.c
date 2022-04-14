#include<stdio.h>
int main()
{
    int n,i,j,arr[100],sum=0,c=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        c++;
        
    }
    if(c>0)
    printf("True");
    else
    printf("False");
    
}