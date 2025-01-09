#include<stdio.h>
void main()
{
	float w1,w2,np1,np2,average;
	printf("weight of items1:");
	scanf("%f",&w1);
	printf("weight of items2:");
	scanf("%f",&w2);
	printf("number of purchase of item1: ");
	scanf("%f",&np1);
	printf("number of purchase of item2: ");
	scanf("%f",&np2);
	average=((w1*np1)+(w2*np2))/(np1+np2);
	printf("average value: %f",average);
	
	
}


