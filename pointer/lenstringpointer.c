#include<stdio.h>
void main()
{
	char name[20],*p1;
	int l=0;
	printf("enter a name:");
	scanf("%s",name);
	for(p1=&name[0];*p1!='\0';p1++)
	{
		l++;
	}
	printf("lenght of string is %d",l);
}
