#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,m,c=0,i;
        scanf("%d%d",&n,&m);
        for(i=n;i<=m;i++)
        {
            if(i%10== 2 || i%10==3 || i%10==9)
            c++;
        }
        printf("%d
",c);
        t--;
    }
}