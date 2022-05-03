#include<stdio.h>
int fun (int s1)
{
    int i,s2,c=0,j,k;
    for(i=1;i<10;i++)
    {c=0;
        s2=s1+i;
        for(j=2;j<s2;j++)
        {
            if(s2%j==0)
            {
                c++;
            }
            
        }
        if(c==0)
        {
            k=i;
            break;
        }
    }
    return k;
}
int main()
{
    int a,b,k,s1;
    scanf("%d%d",&a,&b);
    s1=a+b;
    k=fun(s1);
    printf("%d",k);
}