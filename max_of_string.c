#include<stdio.h>
int main()
{
    char s[100000],max='A';
    int i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
    }
    printf("%c",max);
    
}