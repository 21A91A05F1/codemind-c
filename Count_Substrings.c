#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int n,i,j,c=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for(i=0;s[i]!=NULL;i++)
        {
            for(j=i;s[j]!=NULL;j++)
            {
                if(s[i]=='1' && s[j]=='1')
                {
                    c+=1;
                }
            }
        }
        printf("%d
",c);
        t--;
    }
    
}