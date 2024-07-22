//C program to find the number is prime or not using function

#include<stdio.h>

int prime(int num);//Prime prototype
{
	if (num<=1)
	{
		return 0;
	}
	for(int i=2; i*i<=num; i++)
	{
		if (num % i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;

	printf("Enter the number to check that number is prime or not:\n");
	scanf("%d",&n);

	if (prime(n))
	{
		printf("%d is  a prime number", n);
	}
	else
	{
		printf("%d is not a prime number", n);
	}
	return 0;
}

