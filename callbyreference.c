//C program to demonstrate call by refermence

#include<stdio.h>

void swap(int *a, int *b); //Function Prototype

int main()
{
	int a=10, b=20;

	printf("Before Swapping, Value of a = %d and b=%d\n",a,b);

	swap(&a, &b);

	printf("After Swapping, Value of a = %d and b=%d\n",a,b);
 
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

	printf("Inside swap function,Value of a =%d and b=%d\n",*a, *b);

}
