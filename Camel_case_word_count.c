#include<stdio.h>
int main()
{
    char str[10000];
    int i,c=0;
    scanf("%s",str);
    for(i=1;i<str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        c++;
    }
    printf("%d",c+1);
}