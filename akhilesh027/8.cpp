#include<stdio.h>
int main()
{
	long n;
	int rem,large=0;
	scanf("%ld",&n);
	while(n!=0)
	{
		rem=n%10;
		if(rem>large)
		{
			large=rem;
		}
		n=n/10;
	}
printf("%d",large);	
return 0;
}
