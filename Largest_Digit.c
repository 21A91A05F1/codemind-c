#include<stdio.h>
int main()
{
    int n,d,ld=0,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        c=d;
        
         if(ld<c)
         {
             ld=c;
         }
        
    }
    printf("%d",ld);
   
}

