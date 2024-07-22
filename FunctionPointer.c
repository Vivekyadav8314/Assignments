//C program to demonstrate the function pointer

#include<stdio.h>

//Function definitions
int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)

{
	return a-b;
}

int main()
{
	//Function pointer declaration
	int (*funcptr)(int , int);

	//Assign add function to function pointer
	funcptr=add;
	printf("Add : %d\n",funcptr(5,3)); //Output =8
     
	 //Assign subtract function to function pointer
        funcptr=subtract;
        printf("subtract : %d\n",funcptr(5,3)); //Output =2

	return 0;
}
     

