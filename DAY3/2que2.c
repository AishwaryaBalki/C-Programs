#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter the value of num1:");
	scanf("%d",&num1);
	
	printf("enter the value of num2:");
	scanf("%d",&num2);
	
	printf("enter the value of num3:");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
		printf("%d is maximum ",num1);
	}
	else if(num2>num3)
	{
		printf("%d is maximum ",num2);
	}
	else
	{
		printf("%d is maximum",num3);
	}
}
