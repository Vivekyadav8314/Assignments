// C program to demonstrate increment operator

#include<stdio.h>

int main()
{
	int a=5;

	printf("a=%d\n",a);
	printf("a=%d\n",++a); //Pre-increment result

	printf("a=%d\n",a++); //Post-increment result
	printf("a=%d\n", a);

	return 0;
}
