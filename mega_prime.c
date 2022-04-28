#include<stdio.h>
int is_prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int n,t,d,c=0,c1=0,c2=0,i;
    scanf("%d",&n);
    if(is_prime(n)==1)
    {
        t=n;
        while(n!=0)
        {
            d=n%10;
            c1++;
            if(is_prime(d)==1)
            c2++;
            n=n/10;
        }
        if(c1==c2)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
     else
    printf("Not Mega Prime");
}