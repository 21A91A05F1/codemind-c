#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int n,i,max=0,min=0,c=0,j;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        max=arr[0];
        min=arr[0];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    continue;
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        if(max<arr[i])
                        {
                            max=arr[i];
                        }
                        if(min>arr[i])
                        {
                            min=arr[i];
                        }
                    }
                    c=1;
                    break;
                }
            }
        }
        if(c==0)
        {
            printf("0");
        }
        else
        {
            printf("%d
",max-min);
        }
        
        t--;
    }
}