#include<stdio.h>
void main()
{
	int ndays,days,weeks,years,months;
	printf("enter no. of days:");
	scanf("%d",&ndays);
	years=ndays/365;
	months=ndays/30;
	ndays=ndays%365;
	weeks=ndays/7;
	
	days=ndays%7;
	printf("year is %d and \n months is %d and \nweeks is %d and \ndays is %d ",years,months,weeks,days);
	
	
}
