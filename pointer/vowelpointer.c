#include<stdio.h>
void main()
{
	char name[20],*p1;
	int v=0,c=0 ;
	printf("enter a name:");
	scanf("%s",name);
	for(p1=&name[0];*p1!='\0';p1++)
	{
		if(*p1=='a' || *p1=='e'|| *p1=='i' || *p1=='o' || *p1=='u')
		{
		   v++;
	    }
	    else
	    {
	      c++;	
		}
		
	}
	printf("lenght of vowel in string is %d",v);
	printf("\nlenght of consonent in string  is %d",c);
}
