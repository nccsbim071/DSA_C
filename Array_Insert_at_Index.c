#include <stdio.h> 

#define MAX 5

void main()
{
    int myArray[MAX] = {1,2,4,5};
    int insertIndex = 2; 
    int n = 4; //Current number of elements in Array 
    int value = 3; //Value to be inserted 

    if(n==MAX)
    {
        printf("Not enough space available to insert element.");  
        return;
    }

    printf("\nCurrent elements in the array.");
    for(int i=0;i<n;i++)
    {
        printf("\nmyArray[%d]=%d",i,myArray[i]);
    }

    int j = n;
    while (j> insertIndex)
    {
        myArray[j] = myArray[j-1];
        j--;        
    }       

    myArray[j] = value;
    n++;

    printf("\nElements in the array after insertion:");

    for(int i=0;i<n;i++)
    {
        printf("\nmyArray[%d]=%d",i,myArray[i]);
    }
}