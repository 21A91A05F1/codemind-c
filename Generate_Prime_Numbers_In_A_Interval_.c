#include<stdio.h>
int main()
{
    int a,b,i,c=0,flag=0,j;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d
",i);
        }
    }
    return 0;
}