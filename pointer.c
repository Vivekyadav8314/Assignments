// C program to demonstrate the use of pointers

#include<stdio.h>

int main()
{
	int num=10;
	int *ptr=&num; //Pointer declaration and initialization

	printf("Value of s=%d\n",num);
	printf("Address of a=%p\n",&num);

	printf("Using pointer Value of a -%d\n", *ptr);
	printf("Using pointer, Address of a= %p\n",ptr);
	printf("Address of ptr =%p\n",&ptr);

	num=20;

	printf("Modified value of a =%d\n",num);
	printf("Address of a=%p\n",&num);

	printf("Using pointer value of a=%d\n",*ptr);
	printf("Using pointer, Address of a=%p\n",ptr);
	printf("Address of ptr=%p\n",&ptr);

	return 0;
}

