#include<stdio.h>
int main()
{
    int n,d,res,sum=0,product=1;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        sum=sum+d;
        product=product*d;
        n=n/10;
        
    }
    res=product-sum;
    printf("%d",res);
}