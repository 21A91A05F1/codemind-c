#include<stdio.h>
int main()
{
    char str[100];
    int i,k=0,s=0,d=0,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e'  || str[i]=='i' || str[i]=='o' || str[i]=='u')
        c++;
        else if(str[i]>='0' && str[i]<='9')
        d++;
        else if(str[i]==' ')
        s++;
        else
        k++;
    }
    printf("Vowels: %d
",c);
    printf("Consonants: %d
",k);
    printf("Digits: %d
",d);
    printf("White spaces: %d
",s);
}
