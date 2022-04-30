#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        long long int n,a,b,k,c1,c2;
        scanf("%lld%lld%lld%lld",&n,&a,&b,&k);
        if(a%b==0)
        {
            c1=-(n/a-n/b);
           
        }
        else if(b%a==0)
        {
            c1=-(n/b-n/a);
            
        }
       
        else
        {
             c2=b-2*(n/a*b);
            c1=(n/a-n/c2);
        }
        if(c1>=k)
        {
            printf("Win
");
        }
        else
        printf("Lose
");
        t--;
    }
}