//C program to demonstrate auto storage class
//

#include<stdio.h>

//User-Defined Function

void func()
{
	auto int x=10;

	printf("Inside function: x : %d\n", x);
}
int main()
{

	 auto int x=5; //autois optional, but included here for clarity
			//
	printf("Inside Mainbefore calling  function call : x : %d\n", x);

	func();

	printf("Inside Main after calling func call : x : %d\n", x);

	return 0;
}
