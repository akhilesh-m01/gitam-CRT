#include<stdio.h>
int main()
{
	long n;
	int rem,large=0,small=9;
	scanf("%ld",&n);
	while(n!=0)
	{
		rem=n%10;
		if(rem>large)
		{
			large=rem;
		}
		if(rem<small)
		{
			small=rem;
		}
		
		n=n/10;
	}
printf("<%d,%d>",small,large);	
return 0;
}
