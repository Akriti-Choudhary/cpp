#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n,i,j,count1=0,count2=0;

	printf("Enter the dimensions of the matrix :");
	scanf("%d",&n);
	
	int *arr[n];
	
	for(i=0;i<n;i++)
	{
		arr[i]=(int*)malloc(n*sizeof(int));
	}
	
	printf("Enter %d numbers into matrix of %d X %d , such that the matrix is sparse : \n",n*n,n,n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]==0)
			count1++; //counting the total number of zero elements in the matrix
			
			else
			count2++; //counting the total number of non zero elements in the matrix
		}
	}
	
	if(count1<=count2)
	printf("NOT A SPARSE MATRIX ... WRONG INPUT");
	
	else
	{

	
	int *brr[n];
	
	for(i=0;i<n;i++)
	{
		brr[i]=(int*)malloc(n*sizeof(int));
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			brr[i][j]=arr[j][i];
		}
	}
	
	int *sum[n];
	
	for(i=0;i<n;i++)
	{
		sum[i]=(int*)malloc(n*sizeof(int));
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=arr[i][j]+brr[i][j];
		}
	}
	
	printf("ORIGINAL SPARSE MATRIX : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",arr[i][j]);
		
		printf("\n");
	}
	
	printf("TRANSPOSE OF THE SPARSE MATRIX : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",brr[i][j]);
		
		printf("\n");
	}
	
	printf("SUM OF ORIGINAL MATRIX AND ITS TRANSPOSE : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",sum[i][j]);
		
		printf("\n");
	}
	
	
		}
	return 0;
}
