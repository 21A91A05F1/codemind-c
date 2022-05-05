#include<stdio.h>
int main()
{
    int n,rev=0,j,d,c1=0,c2=0,f,g,i,temp;
    scanf("%d",&n);
    temp=n;
    
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    n=temp;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c1++;
        }
        
    
    }
    if(c1==0)
    f=1;
    for(j=2;j<rev;j++)
    {
        if(rev%j==0)
        {
            c2++;
        }
    }
    if(c2==0)
    g=1;
    if(c1==0 && c2==0)
    printf("circular prime");
    else if(c1==0)
    printf("prime but not a circular prime");
    else
    printf("not prime");
}