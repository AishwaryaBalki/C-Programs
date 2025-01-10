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
	if(a==b && b==c && a==c)
	{
		printf("it is a equilateral triangle");
	}
	else if(a==b || b==c || a==c)
	{
		printf("it is a isosceles triangle");
	}
	else
	{
	    printf("it is a scalene triangle");	
	}
	
}
	
