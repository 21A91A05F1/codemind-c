#include<stdio.h>
int main()
{
    int s,t,b,c=0;
    int tc;
    scanf("%d%d%d",&t,&s,&b);
    c=2*s*t*b*512;
    tc=c/1024;
    printf("%dKB",tc);
    
}