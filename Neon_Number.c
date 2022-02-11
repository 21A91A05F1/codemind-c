#include<stdio.h>
int main()
{
    int n,d,sum=0,res;
    scanf("%d",&n);
    res=n*n;
    while(res>0)
    {
        d=res%10;
        sum=sum+d;
        res=res/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}