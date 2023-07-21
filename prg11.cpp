//program to check a number is prime or not prime//
#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
		i++;
	}
	if(count==0)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime number");
	}
	return 0;
}
