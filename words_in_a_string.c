#include<stdio.h>
int main()
{
    char str[100];
    int i,w=1;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' '|| str[i]=='
' )
        w++;
    }
    printf("%d",w);
    
}