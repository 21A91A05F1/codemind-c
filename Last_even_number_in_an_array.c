#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0,a1[100],a2[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a1[i]);//1 2 3 4 5 6 7 
    for(i=0;i<n;i++)
    {
        if(a1[i]%2==0)// 2 4 6
        {
            c1++;
            a2[c2]=a1[i];
            c2++;
        }
        
    }
    printf("%d",a2[c2-1]);
}