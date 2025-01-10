#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	
		printf("its alphabet");

	else if (ch>='0' && ch<='9')
	
	    printf(" it is a digit ");
    
    else
    
    	printf("it is  a special character ");
	
}  
