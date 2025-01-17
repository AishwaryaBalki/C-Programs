#include<stdio.h>
void main()
{
	int A[3][3],sum=0,i,j;
	printf("enter the element of 1st array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    {
	    	scanf("%d",&A[i][j]);
	    	
			
     	}
     }
     
     for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	    {
	    	
	    	if(i==j)
	    	{
	    	
	    	sum=sum+A[i][j];
		    }
     	}
    } 
     printf("addition of right diagonal of array is:\n");
     
   
     	printf("\n%d",sum);
     }
    

