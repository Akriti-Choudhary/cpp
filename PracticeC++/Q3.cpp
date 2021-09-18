#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m1,n1,m2,n2,i,j,k,count1=0,count2=0,count3=0,count4=0;
	
	printf("Enter the dimensions of the first matrix :\n");
	printf("Enter the no. of rows :");
	scanf("%d",&m1);
	printf("Enter the no. of columns :");
	scanf("%d",&n1);
	
	printf("Enter the dimensions of the second matrix :\n");
	printf("Enter the no. of rows :");
	scanf("%d",&m2);
	printf("Enter the no. of columns :");
	scanf("%d",&n2);
	
	if(n1!=m2)
	{
		printf("MATRIX MULTIPLICATION NOT POSSIBLE \n BECAUSE NO. OF COLOUMNS OF FIRST MATRIX != NO. OF ROWS OF SECOND MATRIX \n");
	}
	
	else
	{
		int *arr[m1];
		
		for(i=0;i<m1;i++)
		{
			arr[i]=(int*)malloc(n1*sizeof(int));
		}
		
		printf("Enter %d numbers into array of %d X %d : \n",(m1*n1),m1,n1);
		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			scanf("%d",&arr[i][j]);
		}
		
		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				if(arr[i][j]==0)
				count1++;
				
				else
				count2++;
			}
		}
		
		
		if(count1<=count2)
		{
			printf("MATRIX A IS NOT SPARSE \n ");
		}
		
		else
		{
		
		int *brr[m2];
		
		for(i=0;i<m2;i++)
		{
			brr[i]=(int*)malloc(n2*sizeof(int));
		}
		
		printf("Enter %d numbers into array of %d X %d : \n",(m2*n2),m2,n2);
		
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			scanf("%d",&brr[i][j]);
		}
		
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				if(brr[i][j]==0)
				count3++;
				
				else
				count4++;
			}
		}
		
		if(count3<=count4)
		{
			printf("MATRIX B IS NOT SPARSE \n");
		}
		
		else
		{
		
		int *c[m1];
		
		for(i=0;i<n2;i++)
		{
			c[i]=(int*)malloc(n2*sizeof(int));
		}
		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				c[i][j]=0;
				
				for(k=0;k<n1 ;k++)
				{
				c[i][j]=c[i][j]+arr[i][k]*brr[k][j]	;
				}
			}
		}
		
		printf("MATRIX A : \n");
		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("%d ",arr[i][j]);
			}
			
			printf("\n");
		}
		
			printf("MATRIX B : \n");
		
		for(i=0;i<m2;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d ",brr[i][j]);
			}
			
			printf("\n");
		}
		
		
		printf("PRODUCT OF THE TWO MATRICES : \n");
		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d ",c[i][j]);
			}
			
			printf("\n");
		}
		
		
	}
	}
	
	}
	return 0;
	
	
}
