#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int w=1,i,c=0;
    scanf("%[^
]s",str);
    w=strlen(str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        c++;
    }
    printf("%d",w-c);
    
}