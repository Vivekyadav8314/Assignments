//C program to demonstrate the pointer to constant:

#include<stdio.h>

int main()
{
        int a=10,b=20;
        const int *ptr=&a; //Constant pointer to int

        printf("Initial value of a=%d\n",*ptr);

       *ptr=15; //Error: Assign of read-only location *ptr

	//Change the pointer to point to another locatio

        ptr=&b; 
	printf("Value of b=%d\n",*ptr);

        return 0;
}

