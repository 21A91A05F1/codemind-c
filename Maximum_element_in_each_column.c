#include<stdio.h>
int main()
{
    int r,c,arr[100][100],max=-99999;
    scanf("%d%d",&r,&c);
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        int max=-99999;
        for(i=0;i<r;i++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
        printf("%d
",max);
    }
    
    
}