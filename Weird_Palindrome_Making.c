#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        int a,c=0,arr[10000],i;
        scanf("%d",&a);
        for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
        for(i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            c=c+1;
        }
        printf("%d
",(c/2));
        n=n-1;
    }
}