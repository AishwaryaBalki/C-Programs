#include<stdio.h>
void main()
{
	char name[20];
	printf("enter your full name:");
	//scanf("%s",&name);
	gets(name);
	printf("%s",name);
}
