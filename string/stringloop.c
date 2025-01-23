#include<stdio.h>
void main()
{
	char name[20];
	int i;
	printf("enter your full name:");

	scanf("%s",name);
	
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}
