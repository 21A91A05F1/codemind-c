#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        char s[10000];
        int i,c=0;
        scanf("%s",s);
        for(i=0;s[i]!=NULL;i++){
            if(s[i]==s[i+1]){
                c++;
            }
        }
        printf("%d
",c);
        t--;
    }
}