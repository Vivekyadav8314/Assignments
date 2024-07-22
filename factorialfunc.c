//Function to find the factorial of a fgiven number ysing functions.

#include<stdio.h>

int factorial(int n);//Function Prototype

int main()
{
	int n;

	printf("Enter the number to find the factorial:\n");
	scanf("%d",&n);

	printf("Factorial of %d is %d\n", n, factorial(n));//Invoking the function factorial

	return 0;
}

//Body of function factorial
int factorial(int n)
{
	int i,fact=1;
	for(i=1; i<=n; i++)
	{
		fact =fact*i;
	}
	return fact;
}
