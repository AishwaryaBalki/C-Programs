#include<stdio.h>
void sub(int x,int y)
{
	int res;
	res=x-y;
	printf("subtraction is: %d",res);
}
void main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	sub(a,b);
}
