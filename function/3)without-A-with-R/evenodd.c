#include<stdio.h>
int evenodd()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n%2==0)
	{
	return 0;
	}
	else
	{ 
     return 1; 
	}

}
void main()
{
	int r;
	r=evenodd();
	if(r==0)
	{
		printf("the number is even:");
	}
	else
	{
	printf("the number is odd:");	
	}

	
}
