#include<stdio.h>
int arm()
{
	int num,rem,sum=0;
	int org;
	printf("enter the number:");
	scanf("%d",&num);
	org=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
		if(org==sum)
	{
		printf("number is armstrong:");
	}
	else
	{
		printf("number is not armstrong");
	}
	return org;
}
	
void main()
{
	int r;
	r=arm();
}
