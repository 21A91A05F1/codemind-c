#include<stdio.h>
int main()
{
    int n,d,ec=0,c=0,oc=0,k=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        c++;
        n=n/10;
        if(d%2==0)
        ec++;
        else if(d%2!=0)
        oc++;
        else
        k++;
        
    }
    if(c==ec)
    printf("Even");
    else if(c==oc)
    printf("Odd");
    else
    printf("Mixed");
}