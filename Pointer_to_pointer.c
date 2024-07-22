//C program to demonstrate the pointer to pointer or double pointer.

#include<stdio.h>

int main()
{
	int a=10;
	int *ptr=&a; //Pointer to int
        int **dptr=&ptr; //Pointer to pointer to int

	//Print the values using double pointer
	//Dereferencing the double pointer
	//The firs dereference *dptr gives the value of ptr(address of a)
	//The second dereference **dptr gives the value of a(which is 10)
	
	printf("Value of a %d\n",**dptr);

	printf("Addess stroe in ptr  using double ptr =%p\n",&dptr);

	printf("Address of ptr = %p\n", dptr);

	return 0;
}
