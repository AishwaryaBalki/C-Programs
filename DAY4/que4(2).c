#include<stdio.h>
void main()
{
	int i,n,num,sum=0;
	float avg;
	printf("enter the no:");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        
        printf("enter the number:");
        scanf("%d",&num);
        sum=sum+num;
        avg=sum/10;
        
		
}
		printf("\nsum is %d",sum);
		printf("\navg is %f",avg);

}
