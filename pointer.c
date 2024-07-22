#include<stdio.h>

int main()



{
	int a=10;
	
	//Pointer Declaration
	int *ptr;// * is Dereferencing operator. ptr is an integer pointer
		 
	//pointer Initialization
	ptr=&a;

	printf("Value of a without using the pointer is %d\n",a);
	printf("Value of a with using a pointer is %d\n",*ptr);

	printf("Address of a without  uing the pointer is %p\n", &a);
	printf("Address of a without  uing the pointer is %p\n", &a);

	printf("Addes if integer ptr is %p\n",&ptr);

	return 0;
}

