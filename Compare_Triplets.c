#include<stdio.h>
int main()
{
    int a[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    int b[3];
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    int c=0,d=0,i;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        c++;
        else if (a[i]<b[i])
        d++;
        
    }
    printf("%d %d",c,d);
}