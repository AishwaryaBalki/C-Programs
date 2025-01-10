#include<stdio.h>
void main()
{
	int num1;
	printf("enter the value of num1:");
	scanf("%d",&num1);
	
	if(num1%5==0)
	{
		printf("%d is divisible by 5 ",num1);
	}
	else if(num1%11==0)
	{
		printf("%d is divisible by 11 ",num1);
	}
	else
	{
		printf("%d is not divisble by 5 and 11",num1);
	}
}
