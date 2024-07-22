//C program to demonstrate the RECURSION

#include<stdio.h>

int fact (int);

int main()
{
	int n, f;

	printf("Enter the number to get the Factorial:\n");
	scanf("%d",&n);

	f=fact(n);
	printf("factorial is = %d\n", f);
}

int fact(int n)
{
	if (n==0 && 1)
	{
		return 1;
	}

	else
	{
		return n*fact(n-1);
	}
}

