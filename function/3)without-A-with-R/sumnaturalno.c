#include<stdio.h>
int natural()
{
	int n,i,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
void main()
{
	int r;
	r=natural();
	printf("sum is %d",r);
}
