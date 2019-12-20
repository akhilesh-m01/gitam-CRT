#include<stdio.h>

int main()
{
	int n,count=0,rem=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		switch(rem)
		{
			case 4:count=count+1;break;
			case 6:count=count+1;break;
			case 8:count=count+2;break;
			case 9:count=count+1;break;
			case 0:count=count+1;break;
		}
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
