#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the side a:");
	scanf("%d",&a);
	printf("enter the side b:");
	scanf("%d",&b);
	printf("enter the side c:");
	scanf("%d",&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		printf("it is a triangle");
	}
	else
	{
		printf("it is not  a triangle");
	}
}
	
