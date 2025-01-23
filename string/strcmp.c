#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20]="Aishwarya";
	char str2[20]="Aishwarya";
	char str3[20]="Balki";
	printf("%d",strcmp(str1,str2));
	printf("\n%d",strcmp(str2,str3));
}
