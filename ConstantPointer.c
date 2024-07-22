//C program to demonstrate the Constant pointer

#include<stdio.h>

int main()
{
	int a=10,b=20;
	int *const ptr=&a; //Constant pointer to int

	printf("Initial value of a=%d\n",*ptr);

	*ptr=15; //Modifying the value at the address

	printf("Modified value of a =%d\n", *ptr);

	//Attempt to change the address the constant pointer points to
	
    //	ptr=&b; //Error: Read-only variable ptr

	return 0;
}

