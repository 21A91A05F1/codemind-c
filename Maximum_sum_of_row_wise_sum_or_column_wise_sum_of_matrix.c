#include<stdio.h>
int main()
{
    int i,r,c,j,sum=0,a[100],c1=0,max,c2=0,k1=0,a1[100];
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0;
    for(i=0;i<r;i++)
    {
       sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        c1++;
         a[k]=sum;
         k++;
    }
    
     for(i=0;i<c;i++)
    {
       sum=0;
        for(j=0;j<r;j++)
        {
            sum=sum+arr[j][i];
        }
        c2++;
         a1[k1]=sum;
         k1++;
    }
    
    max=a[0];
    for(k=0;k<c1;k++)
    {
        if(a[k]>max)
        max=a[k];
    }
   int max1=a1[0];
    for(k1=0;k1<c1;k1++)
    {
        if(a[k1]>max1)
        max1=a[k1];
    }
    if(max>max1)
    printf("%d",max);
    else
    printf("%d",max1);
   
}