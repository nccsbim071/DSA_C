#include <stdio.h> 
#define MAX 5 

void main() 
{
	int myArray[] = {1,2,3,4,5};
	int k = 5, item = 45, i=0;
	
	printf("\nElements of array before update:\n");
	
	for(i=0;i<MAX;i++)
	{
		printf("myArray[%d]: %d\n",i,myArray[i]);
	}
	
	myArray[k-1] = item;
	
	printf("\nElements of array after update:\n");
	
	i=0;
	
	while(i<MAX)
	{
		printf("myArray[%d]: %d\n",i,myArray[i]);		
		i+=1;
	}
}
