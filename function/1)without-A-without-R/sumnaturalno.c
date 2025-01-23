#include<stdio.h>
void natural()
{
	int n,i,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	
	}
	printf("%d",sum);
}

void main()
{
	natural();
}
