#include<stdio.h>
void div(int x,int y)
{
	int res;
	res=x/y;
	printf("division is: %d",res);
}
void main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	div(a,b);
}
