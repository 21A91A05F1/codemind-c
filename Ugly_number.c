#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%5==0)
        {
            n/=5;
        }
        else if(n%3==0)
        {
            n/=3;
        }
        else if(n%2==0)
        {
            n/=2;
        }
        else
        {
            printf("Not Ugly Number");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Ugly Number");
    }
    
}