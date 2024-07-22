//C program to demonstrate to add two number using pointers
//

#include<stdio.h>

int main()
{
	int num1,num2,sum;
	int *ptr1,*ptr2;

	ptr1=&num1; //ptr1 store the address of num1
        ptr2=&num2; //ptr2 store the address of num2

	printf("Enter any teo number:\n");
	scanf("%d %d",ptr1,ptr2);//We are not using the &(address of operator) in the scanf() function
				 //scanf() take the actual memeory address where the user input is yo be stoored.
				 //SInce we are the pointers, the pointer variable ptr1 and ptr2 containes
				 //The actual memeory adrees of num1 and num2

	sum=*ptr1+*ptr2;

	printf("Sum =%d\n",sum);

	return 0;
}


