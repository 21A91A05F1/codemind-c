#include<stdio.h>
int main(void)
{
   long long int N;
    scanf("%lld",&N);
    if(N>=1000000000 && N<=9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}