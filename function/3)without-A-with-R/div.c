#include<stdio.h>
int div()
{
	int a,b,res;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	res=a/b;
	return res;
}
void main()
{
	int r;
	r=div();
	printf("division is :%d",r);
}
