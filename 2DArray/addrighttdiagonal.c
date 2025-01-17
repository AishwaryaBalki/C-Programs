#include<stdio.h>
void main()
{
	int A[20][20],sum=0,i,j,n;
	printf(" Enter the number of rows and Column of matrices: ");
	scanf("%d",&n);
	printf("enter the element of 1st array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	    {
	    	scanf("%d",&A[i][j]);
	    	
			
     	}
     }
     
     for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	    {
	    	printf("%d    ",A[i][j]);
			
     	}
     	printf("\n");
     }
     
     for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	    {
	    	
	    	if(i+j==n-1)
	    	{
	    	
	    	sum=sum+A[i][j];
		    }
     	}
    } 
     printf("addition of right diagonal of array is:\n");
     
   
     	printf("\n%d",sum);
     }
    

