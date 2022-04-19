#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    int w=0,i,l,k=0;
    scanf("%[^
]s",str);
    l=strlen(str);
   for(i=0;i<l;i++)
   {
       if(str[i]>=97 && str[i]<=122 || str[i]>=65 && str[i]<=90)
       {
           w++;
          // printf("%c",str[i]);
       }
       if(str[i]==' ')
       k++;
   }
   printf("%d",(l-k)-w);
    
}