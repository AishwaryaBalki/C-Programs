#include<stdio.h>
void fact(int x)
{
	int fact=1,i,sum=0,r;
	
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
		r=fact/i;
		sum=sum+r;
	}
	printf("%d",sum);
	
}
void main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	fact(n);
}
