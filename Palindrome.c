#include<stdio.h>
int main()
{
    int n,t,sum=0,temp;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        temp=n%10;
        sum=sum*10+temp;
        
        n=n/10;
    }
    if(t==sum)
    printf("True");
    else
    printf("False");
}