#include <stdio.h>

#define MAX 5 

void main()
{
    int myArray[MAX] = {1,2,4,5};
    int value = 3;
    int index = 1;
    int n = 4;

    if(n==MAX)
    {
        printf("\nNot enough space in array to insert elements.");
        return;
    }

    printf("\nCurrent elements in array:");
    for(int i=0;i<n;i++)
    {
        printf("\nmyArray[%d]=%d",i,myArray[i]);
    }

    int j = n; 
    while (j>index+1)
    {
        myArray[j] = myArray[j-1];
        j--;
    }

    myArray[index+1] = value; 
    n++;

    printf("\nElements in array after insertion:");
    for(int i=0;i<n;i++)
    {
        printf("\nmyArray[%d]=%d",i,myArray[i]);
    }
}