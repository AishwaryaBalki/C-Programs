#include<stdio.h>
int multi()
{
	int a,b,res;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	res=a*b;
	return res;
}
void main()
{
	int r;
	r=multi();
	printf("multiplicationtion is :%d",r);
}
