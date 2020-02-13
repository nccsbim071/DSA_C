#include <stdio.h> 
#include <conio.h>
#define MAX 5 

int main()
{
    int myArray[MAX] = {1,3,5,7,8};
    int n = 5; 
    int k = 3; 

    printf("\nCurrent elements in array:\n");
	
    for(int i=0;i<n;i++)
    {
        printf("myArray[%d]:%d\n",i,myArray[i]);
    }
	
	int j=k;
	
	while(j<n)
	{
		myArray[j-1] = myArray[j];		
		j++;
	}
	
	n-=1;
	
	printf("\nElements in array after deleting item:\n");
	
    for(int i=0;i<n;i++)
    {
        printf("myArray[%d]:%d\n",i,myArray[i]);
    }
	
	getch();
	return 0;
}