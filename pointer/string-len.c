#include<stdio.h>
void main()
{
	char str[20],*p;
	int i,len=0;
	printf("enter the string:");
	//scanf("%s",&str);
	gets(str);
	p=&str[0];
	for(;*p!='\0';p++)
	{
		len=len+1;
	}
	printf("%d",len);
}
