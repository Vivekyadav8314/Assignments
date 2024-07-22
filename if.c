//C program to check the person is eligible to vote or note.

#include<stdio.h>

int main()
{
	int age;

	printf("Enter your age :\n");
	scanf("%d",&age);

	if(age >= 18)
	{
		 printf("Eligible to vote in India\n");
	}

	printf("This statement is executed irrespective of if\n");

	return 0;
}
