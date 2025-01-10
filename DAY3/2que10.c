#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf(" %c  lowercase");
	}
	else
	{
		printf(" %c uppercase");
	}
}
