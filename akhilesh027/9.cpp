#include<stdio.h>
int main()
{
	long n;
	int rem,large=0,count=3;
	scanf("%ld",&n);
	while(count!=0)
	{
		rem=n%10;
		if(rem>large)
		{
			large=rem;
		}
		n=n/10;
		count=count-1;
	}
printf("%d",large);	
return 0;
}
