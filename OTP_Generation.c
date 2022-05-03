#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,d,rev=0,d2;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
         n=n/10;
         
    }
    while(rev)
    {
        d2=rev%10;
        rev=rev/10;
        if(d2%2==0)
        {
            continue;
        }
        else
        {
            printf("%d",d2*d2);
        }
        
        
    }

    
    
}