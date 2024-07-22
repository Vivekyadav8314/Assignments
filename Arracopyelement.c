//C program to copy all the elements of one array to another array
//
//Input: 1 2 3 4 5 6 7 8 9 10
//
//Output:
//Array1: 1 2 3 4 5 6 7 8 9 10
//Array2: 1 2 3 4 5 6 7 8 9 10
//
//For loop and the array

#include<stdio.h>

#define MAX_SIZE 100

int main()
{
	 int source[MAX_SIZE],destination[MAX_SIZE];
	 int i, size;
 
	 printf("Enter the size of the array: \n");
	 scanf("%d",&size);

	 printf("Enter the elements of the source array:\n");
	 for(i=0;i<size;i++)
	 {
		 scanf("%d",&source[i]);
	 }

	 //Copy all elements from source array to destination array
	 for(i=0;i<size;i++)
	 {
		 destination[i]=source[i];
	 }

	 printf("Enters of source array are...\n");
	 for(i=0;i<size;i++)
	 {
		 printf("%d\n",source[i]);
	 }

	 printf("Elements of destinationarray are...\n");
	 for(i=0;i<size;i++)
	 {
		 printf("%d\n",destination[i]);
	 }

	 return 0;
}

