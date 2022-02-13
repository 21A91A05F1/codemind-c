#include<stdio.h>
int main()
{
    int n1,n2,temp,divisor,dividend,rem;
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        dividend=n1;
        divisor=n2;
    }
    else
    {
        dividend=n2;
          divisor=n1;
        
    }
    while(divisor)
    {
        rem=dividend%divisor;
        dividend=divisor;
        divisor=rem;
    }
    printf("%d",dividend);
    
    
}