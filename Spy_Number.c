#include<stdio.h>
int main()
{
    int n,d,sum=0,p=1;
    scanf("%d",&n);
    
    while(n>0)
    {
      d=n%10;
      sum=sum+d;
      p=p*d;
      n=n/10;
    }
    if(sum==p)
    printf("Spy Number");
    else
    printf("Not Spy Number ");
}