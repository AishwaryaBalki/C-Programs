#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the angle of a:");
	scanf("%d",&a);
	printf("enter the angle of b:");
	scanf("%d",&b);
	printf("enter the angle of c:");
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("it is a triangle");
	}
	else
	{
		printf("it is not  a triangle");
	}
}
	
