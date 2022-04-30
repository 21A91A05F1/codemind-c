#include<stdio.h>
int fun(int n)
{
    int i,d,c1=0,c2=0,t;
    t=n;
    while(n>0)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        else if(t%d==0)
        {
            c1++;
        }
        c2++;
        n=n/10;
        
    }
    if(c2==c1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(fun(i)==1)
        {
            printf("%d ",i);
        }
    }
}