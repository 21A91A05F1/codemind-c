#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,k;
    char str[1000];
    scanf("%[^
]s",str);
    
    scanf("%d%d",&m,&n);
    k=strlen(str);
    for(i=m;i<n+1;i++)
    {
        printf("%c",str[i]);
        
    }
    
    
    
}