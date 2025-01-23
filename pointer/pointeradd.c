#include<stdio.h>
void main()
{
	int a=2,b=3,res;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	//res=*(&a)+*(&b);
	res=*p1+*p2;
	printf("addition %d",res);
}
