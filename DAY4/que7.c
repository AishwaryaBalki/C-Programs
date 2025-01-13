#include<stdio.h>
void main()
{
	int i,num,multi=0;
	printf("table of ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		multi=i*num;
		printf("\n %d*%d=%d",i,num,multi);

}


}
