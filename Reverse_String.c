#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[10000];
    int i,l,j;
    scanf("%[^
]s",s1);
    l=strlen(s1);
    for(i=l-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
    printf("%s",s2);
    
}