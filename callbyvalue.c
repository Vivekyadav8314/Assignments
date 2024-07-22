//C program to demonstrate call by value

#include<stdio.h>

void swap(int a, int b); //Function Protrotype
			 
int main()
{
	int a=10, b=20;

	printf("Before swapping, value of a =%d b=%d\n", a,b);
	
	swap(a,b);//Callng /Invoking swap function

	printf("After Awapping, Vlaue of a=%d b=%d\n", a,b);
	return 0;
}

//Function Definition

 void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

	printf("Inside the swap function, Value of a=%d and b=%d\n",a,b);
}
