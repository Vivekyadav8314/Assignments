//C program to access the rray element using array pointers.

#include<stdio.h>

#define SIZE 5

int main()
{
	int arr[SIZE]={10, 20, 30, 40, 50};

	int *ptr;
	int count;

	ptr=&arr[0]; //ptr pointer to arr[0];
		     //

	count=0;

	printf("Accessing array elements using pointer\n");
	while(count<SIZE)
	{
		printf("arr[%d]=%d\n",count,*ptr);

       		ptr++; //Move the pointer to the next array element

		count++;
	}
	return 0;
}
			
