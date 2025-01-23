#include<stdio.h>
void main()
{
	int a=2,b=5,res;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	if(*p1>*p2)
	{
		printf(" a is greater %d",*p1);
	}
	else
	{
		printf(" b  is greater  %d",*p2);
	}
	
}
