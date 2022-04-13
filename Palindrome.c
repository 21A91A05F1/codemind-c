#include<stdio.h>
int main()
{
	int n,d,t,rev=0,temp;
	scanf("%d",&n);
	while(n>0)
	{ 
	    
	     temp=n;
	     rev=0;
		while(n>0)
		{
			d=n%10;
			rev=rev*10+d;
			n=n/10;
			
		}
		if(rev==temp)
		{
			printf("True
");
		}
		else
	{
		printf("False
");
	}

		
	}
	
	
}