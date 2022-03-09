#include<stdio.h>
int main()
{
    int n,t,i,f=1,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        f=1;
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
    return 0;
}