#include<stdio.h>
int main()
{
    int n,arr[100],a=0,b=0,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a=a+arr[i];
        }
        else
        {
            b=b+arr[i];
        }
    }
    c=-(b-a);
    printf("%d",c);
}