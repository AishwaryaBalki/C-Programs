#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("its alphabet");
	}
	else
	{
	    printf(" not  alphabet");
    }
}  
