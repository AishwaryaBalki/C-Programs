#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e'||ch=='i' || ch=='o' || ch=='u')
	{
		printf("it is a vowel");
	}
	else
	{
	    printf(" it is a consonent");
    }
}  
