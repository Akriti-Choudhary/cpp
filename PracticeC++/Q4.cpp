#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,nge;
	
	printf("Enter size of the array :");
	scanf("%d",&n);
	
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	
	printf("Enter %d numbers into the array : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("ELEMENT   NGE \n");
	for(i=0;i<n;i++)
	{
		nge=-1;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				nge=arr[j];
				break;
				
			}
		}
		
			printf("%d         %d  \n",arr[i],nge);
	}
	
	printf("ARRAY BEFORE REPLACEMENT : \n");
	
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	
	

		for(i=0;i<n;i++)
	{
		nge=-1;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				nge=arr[j];
				break;
			}
		}
		
			arr[i]=nge;
	}
	
	printf("ARRAY AFTER REPLACEMENT : \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	
return 0;	
	
	
}
