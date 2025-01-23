#include<stdio.h>
int fact()
{
	int n, fact=1,i,sum=0,r;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		r=fact/i;
		sum=sum+r;
	}
	return sum;
	
}
void main()
{
	int r;
	
	r=fact();
	printf("%d",r);
}
