#include<stdio.h>
void main()
{
	int a=2,*p;
	p=&a;
	printf("%d",a);
	printf("\n%d",p);//address
	printf("\n%d",*p);
	printf("\n%d",*(&a));
}

