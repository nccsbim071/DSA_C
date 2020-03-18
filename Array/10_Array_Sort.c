#include <stdio.h>
#define MAX 5

void printArray(int arr[])
{
	int i = 0;
	printf("[");
	
	for(i=0;i<MAX;i++)
	{
		printf("%d",arr[i]);
		
		if(i<MAX-1)
		{
			printf(",");
		}
	}
	
	printf("]");
}

void sortAscendingAdjacentSwapping(int arr[])
{
	int i=0,j=0,temp=0, parentIteration=0,childIteration=0;
	
	printf("\nElements of array before sort: ");
	printArray(arr);
	printf("\n");

	for(i=0;i<MAX;i++)
	{
		parentIteration++;
		printf("\nPARENT ITERATION %d START.",parentIteration);
		
		for(j=0;j<MAX-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			
			childIteration++;
			printf("\n  Child Iteration %d: ",childIteration);
			printArray(arr);
		}	
		
		printf("\nPARENT ITERATION %d END.", parentIteration);
		printf("\n");
		
	}
	
	printf("\n\nElements of array after sort: ");
	printArray(arr);
	printf("\n");
}

void sortAscending(int arr[])
{
	int i=0,j=0,temp=0, parentIteration=0,childIteration=0;
	
	printf("\nElements of array before sort: ");
	printArray(arr);
	printf("\n");

	for(i=0;i<MAX;i++)
	{
		parentIteration++;
		printf("\nPARENT ITERATION %d START.",parentIteration);
		
		for(j=0;j<MAX-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			
			childIteration++;
			printf("\n  Child Iteration %d: ",childIteration);
			printArray(arr);
		}	
		
		printf("\nPARENT ITERATION %d END.", parentIteration);
		printf("\n");
		
	}
	
	printf("\n\nElements of array after sort: ");
	printArray(arr);
	printf("\n");
}

void main()
{
	printf("Data pattern 1:");
	int myArray1[] = {5,4,3,2,1};
	sortAscendingAdjacentSwapping(myArray1);		
	
	printf("\n\nData pattern 2:");
	int myArray2[] = {4,3,2,1,5};
	sortAscendingAdjacentSwapping(myArray2);		
	
	printf("\n\nData pattern 3:");
	int myArray3[] = {4,3,2,1,5};
	sortAscending(myArray3);
	
	printf("\n\nData pattern 4:");
	int myArray4[] = {4,3,3,1,3};
	sortAscending(myArray4);

	printf("\n\nData pattern 5:");
	int myArray5[] = {5,1,4,2,3};
	sortAscending(myArray5);
	
	printf("\n\nData pattern 6:");
	int myArray6[] = {1,2,3,4,5};
	sortAscending(myArray6);
}



