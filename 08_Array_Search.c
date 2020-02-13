#include <stdio.h>

#define MAX 5 

void main()
{
	int myArray[] = {143,2,37,490,51};
	int i = 0; 
	int item = 490;	
	
	printf("\nElements of array:\n");
	
	for(i=0;i<MAX;i++)
	{
		printf("myArray[%d]: %d\n",i,myArray[i]);
	}
	
	for(i=0;i<MAX;i++)
	{
		if(myArray[i] == item)
		{		
			break;
		}
	}	
	
	printf("\nFound element %d at position %d.\n",item,i+1);
}