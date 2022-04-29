#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i,s,c=0,temp,p;
    
    scanf("%d",&n);
    temp=n;
     s=n*n;
   while(n)
   {
       d=n%10;
      
       n=n/10;
        c++;
   }
   
   p=pow(10,c);
   
   
   if(s%p==temp)
   printf("Automorphic Number");
   else
    printf("Not an Automorphic Number");
   
}
