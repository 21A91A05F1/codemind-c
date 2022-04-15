#include<stdio.h>
int main()
{
    int n,e=0,o=0,a[100],b[100],c[100],i,co=0,ce=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            o++;
            b[co]=a[i];
            co++;
            
        }
        else
        {
            e++;
            c[ce]=a[i];
            ce++;
        }
    }
      for(co=0;co<o;co++)
    {
        printf("%d ",b[co]);
    }
    for(ce=0;ce<e;ce++)
    {
        printf("%d ",c[ce]);
    }
   
    
    
}