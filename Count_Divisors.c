#include<stdio.h>
int main()
{
    int l=1,r,k,c=0,i;
    scanf("%d%d%d",&l,&r,&k);
    for(i=l;i<=r;i++)
    {
        if(i%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}