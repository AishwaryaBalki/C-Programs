#include<stdio.h>
void natural(int x)
{
	int i,sum=0;
	for(i=1;i<=x;i++)
	{
		sum=sum+i;
	}
	printf("sum is %d",sum);
}
void main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	natural(n);
}
