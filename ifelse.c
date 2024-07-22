// C program for if else statement

#include<stdio.h>

int main()
{

	int number;

	printf("Enter the number to check wether it is odd or even\n");
	scanf("%d", &number);

	if (number % 2==0)
	{
		printf("%d is even\n", number);
	}

	else
	{
		printf("%d is odd\n", number);
	}

	return 0;
}

