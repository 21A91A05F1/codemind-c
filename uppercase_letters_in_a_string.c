#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int w=1,i;
    scanf("%[^
]s",str);
   for(i=0;str[i]!=NULL;i++)
   {
       if(str[i]>=65&& str[i]<90)
       {
           w++;
       }
   }
    printf("%d",w-1);
    
}