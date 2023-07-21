//program to print random two number//
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the value of num1 amd num2 :");
	scanf("%d %d",&num1,&num2);
	while(num1<=num2)
	{
		printf("%d \n",num1);
		num1++;
	}
}

