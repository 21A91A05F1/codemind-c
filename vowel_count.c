#include<stdio.h>
int main()
{
    char str[100];
    int i,k=0,s=0,d=0,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e'  || str[i]=='i' || str[i]=='o' || str[i]=='u'||str[i]=='A' || str[i]=='E'  || str[i]=='I' || str[i]=='O' || str[i]=='U' )
        c++;
       
    }
    printf("%d",c);
    
}
