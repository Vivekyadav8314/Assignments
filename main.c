#include<stdio.h>
#include"vivek.h" // User define header file

int main()
{
	 printf("Inside main function\n");
	 printf("Calling hello function\n");
	 hello();
	 printf("Calling add function\n");
	 add(3,5);
	 printf("Back in main function\n");

	 return 0;
}
