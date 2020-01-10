#include <stdio.h>

int MAX  = 5; 

void main()
{
    int myArray[MAX] = {1,2,4,5};
    int value = 3;
    int index = 1;
    int n = 4;

    printf("\n/Current elements in array:");
    for(int i=0;i<n;i++)
    {
        printf("myArray[%d]=%d",i,myArray[i]);
    }

}