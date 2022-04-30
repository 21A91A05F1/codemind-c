#include<stdio.h>
int is_prime(int m)
{
    int s=0,l; 
    for(l=1;l<=m;l++)
    {
        if(m%l==0)
        s++;
    }
    if(s==2)
    return 1;
    else
    return 0;
}
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int arr[n];
    float sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(is_prime(arr[i])==1)
        {
            c++;
            //printf("%d ",arr[i]);
            sum=sum+arr[i];
        }
    }printf("%.2f",sum/c);
    
}