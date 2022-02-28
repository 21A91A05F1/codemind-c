#include<stdio.h>
int main()
{
    int n,d,rev=0,p,q,temp,t;
    scanf("%d",&n);
    temp=n;
    p=temp*temp;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
   
    q=rev*rev;
    rev=0;
    t=q;
    while(q)
    {
        d=q%10;
        rev=rev*10+d;
        q=q/10;
    }
    if(rev==p)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
    
    
}