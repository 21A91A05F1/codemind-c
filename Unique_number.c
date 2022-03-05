#include<stdio.h>
int main()
{
    int n,i,j,c=0,d[100],flag=0;
    scanf("%d",&n);
    while(n>0)
    {
        d[i++]=n%10;
        c++;
        n=n/10;
    }
    for(i=0;i<c;i++)
    {
        flag=0;
        for(j=0;j<c;j++)
        {
             if(d[i]==d[j] && i!=j )
            {
                flag=1;
                 break;
            }
       
         }
    if(flag==1)
    {
        printf("Not Unique Number");
        return 0;
    }
    }
    
    printf("Unique Number");
    return 0;
}