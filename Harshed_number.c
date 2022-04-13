#include<stdio.h>
int main()
{
    int n,i,d,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)//18
    {
        d=n%10;//8 1
        
        sum=sum+d;//9
        n=n/10;
   
    }
          if(t%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
   
}
