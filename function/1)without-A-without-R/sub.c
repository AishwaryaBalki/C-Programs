#include<stdio.h>
void sub()
{
	int a,b,res;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	res=a-b;
	printf("subtraction is:%d",res);
}
void main()
{
	sub();
}
