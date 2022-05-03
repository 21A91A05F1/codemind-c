#include<stdio.h>
#include<math.h>
int main()
{
    int m=0,i,d,n,c=2,j,d1,d2,a[100],b[100],p,k=0;
    scanf("%d",&n);
    for(i=0;i<n+100;i++)
    {
        c=2;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            a[k]=abs(n-i);
            b[k]=i;
            m++;
            k++;
            
        }
    }
    d=a[0];
    for(i=0;i<m;i++)
    {
        if(d>a[i])
        {
            d=a[i];
            p=b[i];
        }
    }
    printf("%d",abs(n-p));
}