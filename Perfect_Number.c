#include<stdio.h>
int main()
{
    int n,r,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n-1;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}