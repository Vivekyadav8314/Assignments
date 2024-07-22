//C program to demonstrate  the dangling pointer

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr=(int*)malloc(sizeof(int)); //Allocate memory

	*ptr=40; //Assigning the value

	free(ptr); //Free the allocated memory
		   //Now ptr is a dangling pointer


	//Accessing *ptr here is dangerous and leads to undefine behaviour
	
	printf("%d\n", *ptr);

	return 0;
}
