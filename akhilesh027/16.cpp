#include<stdio.h>
int prime(int n);
int reverse(int rev);
int main()
{
	long n;
	int count=0,n1,n2,x,i;
	scanf("%ld",&n);
	x=reverse(n);
	printf("%d",x);
	n1=prime(n);
	n2=prime(x);
	if(n1==0&&n2==0)
	{
		printf("yes");	
	}
	else
	{
		printf("no");
	}
return 0;
}

int prime(int n)
{   
	int i,count=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
	}
	return count;
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
