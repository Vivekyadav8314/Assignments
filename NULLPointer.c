//C programming to demonstrate the NILL pointer.

#include<stdio.h>

int main()
{
	int *ptr=NULL; // Here, ptr is not pointing to any valid memory location.

	if(ptr!=NULL)
	{
		printf("Value of the pointer is %d\n",*ptr);
	}
	else
	{
		printf("NULL pointer\n");
	}

	return 0;
}
