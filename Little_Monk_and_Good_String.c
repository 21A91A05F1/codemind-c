#include<stdio.h>
int main()
{
    char s[100000];
    int i,c=0,d=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>d)
            {
                d=c;
            }
            c=0;
        }
    }
    if(c>d) // since hidden failed 
    {
         d=c;
    }
    printf("%d",d);
}