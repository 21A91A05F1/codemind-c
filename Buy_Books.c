#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],s1=0,s2=0,i,r;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
       
    }
    for(i=0;i<n;i++)
    {
        s1=s1+a[i];
        
    }
    for(i=0;i<n;i++)
    {
        s2=s2+b[i];
        
    }
    if(s1>s2)
    {
        printf("0");
    }
    else
    {
        printf("%d",s2-s1);
    }
}