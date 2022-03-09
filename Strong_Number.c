#include<stdio.h>
int main()
{
    int i,n,temp,d,sum=0,fact;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        fact=1;
        for(i=1;i<=d;i++)
        {
            fact =fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}