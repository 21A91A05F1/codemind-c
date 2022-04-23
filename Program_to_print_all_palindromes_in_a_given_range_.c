#include<stdio.h>
int fun(int i)
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
int  main()
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