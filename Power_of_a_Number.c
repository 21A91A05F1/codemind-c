#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,m,k;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    k=z%m;
    printf("%d",k);
  
}