#include<stdio.h>
void evenodd(int x)
{
	if(x%2==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
	
}
void main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	evenodd(n);
}
