#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int n,c=0,i,j,k=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(str[i]==str[j]){
                    c++;
                }
            }
            if(c==1)
            {
                printf("%c
",str[i]);
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("-1
");
        }
        t--;
    }
}