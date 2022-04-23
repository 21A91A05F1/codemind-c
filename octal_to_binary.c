#include<stdio.h>
#include<math.h>
int main()
{
    long int n,arr[1000],i,j,k,d,sum=0,r,c;
    scanf("%ld",&n);
    i=0;
    while(n!=0)
    {
        d=n%10;
        sum=sum+d*(pow(8,i));
        i++;
        n=n/10;
    }
    while(sum!=0)
    {
        r=sum%2;
        c++;
        arr[k]=r;
        k++;
        sum=sum/2;
        
    }
    for(k=c-1;k>=0;k--)
    {
        printf("%ld",arr[k]);
    }
}