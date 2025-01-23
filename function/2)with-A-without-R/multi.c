#include<stdio.h>
void multi(int x,int y)
{
	int res;
	res=x*y;
	printf("multiplication is: %d",res);
}
void main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	multi(a,b);
}
