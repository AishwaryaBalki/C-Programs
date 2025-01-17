#include<stdio.h>
void main()
{
	int A[2][2],B[2][2],add[2][2],i,j;
	printf("enter the element of 1st array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	    {
	    	scanf("%d",&A[i][j]);
	    	
			
     	}
     }
     printf("enter the element of 2nd array:\n");
     for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	    {
	    	scanf("%d",&B[i][j]);
	    	
			
     	}
     }
     for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	    {
	    	add[i][j]=A[i][j]+B[i][j];
			
     	}
    } 
     printf("addition of two matrix is:\n");
     
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	    {
	    	printf("%d   ",add[i][j]);
			
     	}
     	printf("\n");
     }
    
}
