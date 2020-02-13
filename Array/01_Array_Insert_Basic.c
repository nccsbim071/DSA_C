#include <stdio.h>

void main() 
{
/*
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 3, n = 5;
   int i = 0, j = n;
   
   printf("The original array elements are :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   n = n + 1;
	
   while( j >= k) {
      LA[j+1] = LA[j];
      j = j - 1;
   }

   LA[k] = item;

   printf("The array elements after insertion :\n");

   for(i = 0; i<n; i++)    
   {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   //getchar();
   */

   int n = 5;
   int myArray[5] = {1,2,4,5};
   int v=3,k=3;   

   printf("********** Initial ***********\n");
   int i=0;
   for(i=0;i<n;i++)
   {
        printf("%d\n",myArray[i]);
   }

   int j = n-1;
   while(j>k-1)
   {
      myArray[j] = myArray[j-1];
      j = j-1;
   }   

   myArray[j] = v;
   
   printf("==== After ====\n");
   for(int i=0;i<5;i++)
   {
      printf("%d\n",myArray[i]);
   }
}