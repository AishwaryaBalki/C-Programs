#include<stdio.h>
void arm(int x)
{
	int rem,sum=0;
	int org;
     org=x;
	while(x>0)
	{
		rem=x%10;
		sum=sum+(rem*rem*rem);
		x=x/10;
	}
	if(org==sum)
	{
		printf("number is armstrong:");
	}
	else
	{
		printf("number is not armstrong");
	}
	printf("%d",sum);
}
void main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	arm(num);
}
