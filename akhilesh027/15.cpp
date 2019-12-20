#include<stdio.h>
int main()
{
	long n;
	int rem,rev=0,t;
	scanf("%ld",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==t)
	{
		printf("yes");	
	}
	else
	{
		printf("no");
	}
return 0;
}
