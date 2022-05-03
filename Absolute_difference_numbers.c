#include <stdio.h>
#include<stdlib.h>
long int dc(int long n)
{
    int len = 0;
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return len;
}
long int abs(int long n, int x){
    int i = 0, mod = 1;
    while (i < x) 
    {
        mod *= 10;
        i++;
    }
    int l = n % mod;
    long int len = dc(n);
    while (len != x)
    {
        n /= 10;
      len--;
    }
     int f = n;
    return abs(f - l);
}
 int main()
{
    long int n , x ;
    scanf("%ld%ld",&n,&x);
   printf("%ld",abs(n, x));
    return 0;
}