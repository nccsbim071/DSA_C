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

void sortAscending(int myArray[])
{
	int i=0,j=0,temp=0;
	
	printf("\nElements of array before sort: ");
	printArray(myArray);

	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(myArray[j]>myArray[j+1])
			{
				temp = myArray[j+1];
				myArray[j+1] = myArray[j];
				myArray[j] = temp;
			}			
		}		
	}
	
	printf("\nElements of array after sort: ");
	printArray(myArray);
}

void main()
{
	printf("Data pattern 1:");
	int myArray[] = {5,4,3,2,1};
	sortAscending(myArray);	
	
	/*
	printf("Data pattern 2:");
	myArray = new int[]{4,3,2,1,5};
	sortAscending(myArray);	
	
	printf("Data pattern 3:");
	myArray = new int[]{4,3,2,1,5};
	sortAscending(myArray);
	
	printf("Data pattern 3:");
	myArray = new int[]{4,3,3,1,3};
	sortAscending(myArray);
	*/
}



