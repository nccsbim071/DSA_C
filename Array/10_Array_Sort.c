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
	int myArray9[] = {85,99,58,11,20,58,19,11,54,58,28,17,48,66,11,69,49,62,75,2};
	int myArray10[] = {39,25,60,78,42,83,65,31,29,29,25,90,21,15,83,4,14,94,80,95,92,27,4,47,33,87,25,80,78,49,5,78,67,7,40,93,13,72,69,94,7,92,2,65,39,6,28,61,98,31,82,87,38,88,47,36,84,73,20,40,2,23,54,42,72,55,63,78,81,97,12,36,48,69,16,11,13,85,5,36,1,98,46,55,13,75,58,64,41,1,66,88,64,83,30,98,86,72,52,30,42,91,85,83,35,24,27,93,90,53,23,99,85,50,34,67,73,41,77,6,43,3,25,28,91,88,5,57,98,63,42,46,38,76,89,77,66,54,95,87,33,42,77,83,47,63,40,20,48,83,87,80,41,66,8,97,75,73,95,36,60,9,50,29,55,65,19,80,56,98,33,34,48,15,91,20,1,81,9,61,9,44,86,94,6,53,64,32,50,19,21,100,12,82,25,10,50,58,22,85};
	
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
	
	/*
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
	
	printf("\n\nData pattern 9:");	
	sortAscending(myArray9,20);
	
	printf("\n\nData pattern 10:");	
	sortAscending(myArray10,200);*/	
}



