#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter the value of num1:");
	scanf("%d",&num1);
	
	printf("enter the value of num2:");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("%d is maximum ",num1);
	}
	else
	{
		printf("%d is maximum ",num2);
	}
}
