#include <stdio.h> 

#define MAX 5 

void main()
{
    int array[MAX] = {2,3,4,5};
    int n = 4; //number of elements in array 
    int i = 0; //loop variable 
    int value = 1; //new data element to be stored in array   

    if(n==MAX)
    {
        printf("\nNot enough space available for insertion.");
        return; 
    }   

    printf("\nArray before insertion: \n");
    for(i=0;i<n;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }     

    for(i=n;i>=0;i--)
    {
        array[i+1] = array[i];
    }       

    array[0] = value;
    n = n+1;
    printf("\nArray after insertion: \n");
    for(i=0;i<n;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}