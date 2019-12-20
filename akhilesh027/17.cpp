#include<stdio.h>
int even(int n);
int reverse(int rev);
int main()
{
	int count=0,n1,n2,x,i,rev;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			rev=reverse(i);
			if(rev==i)
			{
				printf("%d  ",rev);
			}
		}
	}
	return 0;
}

int reverse(int n)
{
	int rem=0,rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
