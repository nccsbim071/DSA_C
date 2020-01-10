#include <stdio.h> 

#define MAX 5

void main()
{
    int myArray[MAX] = {1,2,4,5};
    int index = 3; 
    int n = 4;
    int value = 3;

    printf("\nCurrent elements in array.");
    for(int i=0;i<n;i++)
    {
        printf("\nmyArray[%d]=%d",i,myArray[i]);
    }

    if(n==MAX)
    {
        return;
    }

    int j = n;

    while(j >= index)
    {
        myArray[j] = myArray[j-1];
        j-=1;
    }

    myArray[index-1] = value;
    n+=1;

    printf("\nElements in array after insertion.");
    for(int i=0;i<n;i++)
    {
        printf("\nmyArray[%d]=%d",i,myArray[i]);
    }
}