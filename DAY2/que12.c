#include<stdio.h>
void main()
{
	int empID,hour;
	float perhoursalary,salary;
	printf("enter the employee ID:");
	scanf("%d",&empID);
	printf("enter the working hour:");
	scanf("%d",&hour);
	printf("enter the hourly salary:");
	scanf("%f",&perhoursalary);
	salary = perhoursalary*hour;
	printf("employee ID:%d \nsalary %f",empID,salary);
	
}
