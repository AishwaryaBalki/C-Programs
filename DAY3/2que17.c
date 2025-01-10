#include<stdio.h>
void main()
{
	int Physics, Chemistry, Biology, Maths, Computer,tmarks,omarks;
	float percentage;
	printf("enter physics marks:");
    scanf("%d",&Physics);
    printf("enter chemistry marks:");
    scanf("%d",&Chemistry);
    printf("enter biology marks:");
    scanf("%d",&Biology);
    printf("enter Maths marks:");
    scanf("%d",&Maths);
    printf("enter computer marks:");
    scanf("%d",&Computer);
    printf("enter total marks:");
    scanf("%d",&tmarks);
    omarks=Physics+Chemistry+Biology+Maths+Computer;
    printf("obtained marks is %d",omarks);
    percentage=(omarks*100)/tmarks;
    printf("\npercentage is:%f",percentage);
    if(percentage>= 90)
    {
    	printf("\nA Grade");
	}
	else if(percentage >= 80)
	{
		printf("\nB Grade");
	}
	else if(percentage >= 70)
	{
		printf("\nC Grade");
	} 
	else if(percentage >= 60)  
	{
		printf("\nD Grade");
	 } 
	 else if(percentage >= 40)
	 {
	 	printf("\nE Grade");
	 }
	 else
	 {
	 	printf("\nfail");
		 
	 }
    
    
}
    
    
    
    
    
    
