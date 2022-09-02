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
int pali(int i)
{
    int rev=0,d,k;
    k=i;
    while(i!=0)
    {
        d=i%10;
        rev=rev*10+d;
        i=i/10;
        
    }
    if(rev==k)
    {
        return 1;
    }
    else
    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<100000;i++)
    {
        if(pali(i) && is_prime(i))
        {
            printf("%d",i);
            break;
        }
    }
    
    
}