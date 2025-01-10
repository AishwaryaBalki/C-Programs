#include<stdio.h>
void main()
{
	int num1;
	printf("enter the value of num1:");
	scanf("%d",&num1);
	
	
	if(num1>0)
	{
		printf("%d is positive ",num1);
	}
    if(num1<0)
	{
		printf("%d is negative",num1);
	}
    if(num1==0)
	{
		printf("%d is zero",num1);
	}
	
}
