#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    c=a+b;
    while(c<n)
    {
            
        
        a=b;
        b=c;
        c=a+b;
     
        
    }
    if(c==n)
    {
       printf("True") ;
    }
    else
    printf("False");
    return 0;
}