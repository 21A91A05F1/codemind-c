#include<stdio.h>
int main()
{
    int n,x,c=0;
    scanf("%d",&n);
    for(x=0;x<100;x++)
    {
    if(x*(x+1)==n)
    c++;
  
    }
    if(c>0)
    printf("YES");
    else
    printf("NO");
    
}