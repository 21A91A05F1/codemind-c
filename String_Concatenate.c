#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100],temp;
    int len,i,j;
    scanf("%[^
]s",s1);
    scanf(" %[^
]s",s2);
    strcat(s1,s2);
    strcpy(s3,s1);
    len=strlen(s3);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s3[i]>s3[j])
            {
                temp=s3[i];
                s3[i]=s3[j];
                s3[j]=temp;
            }
        }
    }
    printf("%s",s3);
}