#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        char s[1000000];
        scanf("%s",s);
        int i,k=0,l=0;
        for(i=0;s[i]!=NULL;i++){
            l+=1;
        }
        for(i=0;i<l;i++){
            if(s[i]!=s[l-i-1]){
                k=1;
                break;
            }
        }
        if(k==1)
        {
            printf("NO
");
        }
        else
        {
            if(l%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
        t--;
    }
}