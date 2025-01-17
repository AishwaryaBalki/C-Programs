#include<stdio.h>
void main()
{
	int A[2][2],B[2][2],multi[2][2],i,j,k;
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
	    	multi[i][j]=0;
	    	for(k=0;k<2;k++)
	    	{
	           
	    	multi[i][j]=multi[i][j]+A[i][k]*B[k][j];
		    }
     	}
    } 
     printf("multiplication  of array is:\n");
     
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	    {
	    	printf("%d   ",multi[i][j]);
			
     	}
     	printf("\n");
     }
    
}
