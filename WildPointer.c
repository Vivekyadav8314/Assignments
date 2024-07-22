//C program to demonstrate Wild pointer

#include<stdio.h>

int main()
{
	int *ptr;//Declaration without initialization. Here, ptr is awild pointer
		 
	//Dereferencing a wild pointer can cause undefined behaviour
	*ptr=10;//Dangerous and likely to cause crash

	printf("%d\n",*ptr);

	return 0;
}


