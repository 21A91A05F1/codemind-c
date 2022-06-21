#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,c=2,k=0,m=0,a[1000],b[1000],p,min;
    scanf("%d",&t);
    while(t)
    {
        m=0;
        k=0;
        scanf("%d",&n);
        for(i=0;i<n+100;i++)
        {
            c=2;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                c++;
            }
        
            if(c==2)
            {
               
                b[k]=i;
                a[k]=abs(n-i);
                k++;
                m++;
                
            }
           
        }
        min=a[0];
        for(i=0;i<m;i++)
        {
            if(min>a[i])
           {
                min=a[i];
                p=b[i];
           }
        }
        
        printf("%d
",p);
        t--;
    }
}
