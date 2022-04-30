#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,c=0;
     char str[100],ch;
    scanf("%d",&n);
    while(n>0)
  {
      
   
    scanf("%s",str);
    l=strlen(str);
    c=0;
    for(i=0;i<=l;i++)
    {
        ch=str[i];
        
        if(ch>='0' && ch<='9')
        c++;
    }
    if(c>=1)
    printf("Yes
");
    else
    printf("No
");
    n--;
  }
}