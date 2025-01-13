#include<stdio.h>
void main()
{  
   int num;
   printf("enter the +ve number:");
   scanf("%d",&num);
   for(;num<0;)
   {
   	printf("enter the +ve number try again:");
   scanf("%d",&num);
   }
}
