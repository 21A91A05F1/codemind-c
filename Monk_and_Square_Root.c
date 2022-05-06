#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        long int n,m,k=-1,i;
        
        scanf("%ld%ld",&n,&m);
        for(i=0;i<=m;i++)
        {
            if((i*i)%m==n)
            {
                k=i;
                break;
            }
           
        }
         printf("%ld
",k);
        t--;
    }
}