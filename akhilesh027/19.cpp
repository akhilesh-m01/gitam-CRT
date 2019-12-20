#include<stdio.h>
int fact(int n);
int reverse(int rev);
int main()
{
	int count=0,x=0,i,sum=0,rem=0,n,t;

	scanf("%d",&n);
		t=n;
	while(n!=0)
	{
		rem=n%10;
		x=fact(rem);
		
		sum=sum+x;
		
		n=n/10;
	}
		if(sum==t)
		{
			
			printf("yes");
			
		}
		else
		{
			printf("no");
		}
	return 0;
}

int fact(int n)
{
	int fact=1,i;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	
	return fact;
}
