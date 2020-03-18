#include <stdio.h>

void printArray(int arr[],int arrLength)
{
	int i = 0;
	printf("[");
	
	for(i=0;i<arrLength;i++)
	{
		printf("%d",arr[i]);
		
		if(i<arrLength-1)
		{
			printf(",");
		}
	}
	
	printf("]");
}

void sortAscendingAdjacentSwapping(int arr[],int arrLength)
{
	int i=0,j=0,temp=0, parentIteration=0,childIteration=0;
	
	printf("\nElements of array before sort: ");
	printArray(arr,arrLength);
	printf("\n");

	for(i=0;i<arrLength;i++)
	{
		parentIteration++;
		printf("\nPARENT ITERATION %d START.",parentIteration);
		
		for(j=0;j<arrLength-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			
			childIteration++;
			printf("\n  Child Iteration %d: ",childIteration);
			printArray(arr,arrLength);
		}	
		
		printf("\nPARENT ITERATION %d END.", parentIteration);
		printf("\n");
		
	}
	
	printf("\n\nElements of array after sort: ");
	printArray(arr,arrLength);
	printf("\n");
}

void sortAscending(int arr[],int arrLength)
{
	int i=0,j=0,temp=0, parentIteration=0,childIteration=0;
	
	printf("\nElements of array before sort: ");
	printArray(arr,arrLength);
	printf("\n");

	for(i=0;i<arrLength;i++)
	{
		parentIteration++;
		printf("\nPARENT ITERATION %d START.",parentIteration);
		
		for(j=i+1;j<arrLength;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			
			childIteration++;
			printf("\n  Child Iteration %d: ",childIteration);
			printArray(arr,arrLength);
		}	
		
		printf("\nPARENT ITERATION %d END.", parentIteration);
		printf("\n");		
	}
	
	printf("\n\nElements of array after sort: ");
	printArray(arr,arrLength);
	printf("\n");
}

void main()
{
	int myArray1[] = {5,4,3,2,1};
	int myArray2[] = {4,3,2,1,5};
	int myArray3[] = {3,2,1,4,5};
	int myArray4[] = {4,3,3,1,3};
	int myArray5[] = {5,1,4,2,3};
	int myArray6[] = {1,2,3,4,5};
	int myArray7[] = {53,46,4,14,88,24,89,14,20,76};
	int myArray8[] = {31,29,82,6,60,41,83,90,89,57,10,98,73,76,40,100,19,20,66,52};
	
	/*
	//Method Name: sortAscendingAdjacentSwapping
	
	printf("Data pattern 1:");	
	sortAscendingAdjacentSwapping(myArray1,5);		
	
	printf("\n\nData pattern 2:");	
	sortAscendingAdjacentSwapping(myArray2,5);		
	
	printf("\n\nData pattern 3:");	
	sortAscendingAdjacentSwapping(myArray3,5);
	
	printf("\n\nData pattern 4:");	
	sortAscendingAdjacentSwapping(myArray4,5);

	printf("\n\nData pattern 5:");	
	sortAscendingAdjacentSwapping(myArray5,5);
	
	printf("\n\nData pattern 6:");	
	sortAscendingAdjacentSwapping(myArray6,5);	
	*/	
	
	
	//Method Name: sortAscending 
	printf("Data pattern 1:");	
	sortAscending(myArray1,5);		
	
	printf("\n\nData pattern 2:");	
	sortAscending(myArray2,5);		
	
	printf("\n\nData pattern 3:");	
	sortAscending(myArray3,5);
	
	printf("\n\nData pattern 4:");	
	sortAscending(myArray4,5);

	printf("\n\nData pattern 5:");	
	sortAscending(myArray5,5);
	
	printf("\n\nData pattern 6:");	
	sortAscending(myArray6,5);

	printf("\n\nData pattern 7:");	
	sortAscending(myArray7,10);
	
	printf("\n\nData pattern 8:");	
	sortAscending(myArray8,20);	
}



