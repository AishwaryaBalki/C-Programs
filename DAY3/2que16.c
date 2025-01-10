#include<stdio.h>
void main()
{
   int sp,cp,profit,loss;
   printf("enter the selling price:");
   scanf("%d",&sp);
   
   printf("enter the cost price:");
   scanf("%d",&cp);
   profit=sp-cp;
    loss=cp-sp;
    if(profit>loss)
    {
    	printf("%d is the profit",profit);
    	
	}
	else
	{
		printf("%d is the loss",loss);

	}
    
}
