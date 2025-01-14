#include<stdio.h>
void main()
{
	char j;
	int i;
	for(i=1;i<=5;i++)
	{
		for(j='E';j>='A';j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
