#include<stdio.h>
int main()
{
    int n,i,j,d[100],flag=0,c=0,k=0;
    scanf("%d",&n);
    c=0;
    while(n>0)
    { 
        d[i++]=n%10;
        c++;
        n=n/10;
    }
    for(i=0;i<c;i++)
    {flag=0;
        for(j=0;j<c;j++)
        {
            if(d[i]==d[j] && i!=j && d[i]>0)
            {
                flag=1;
                d[j]=-1;
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