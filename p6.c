#include<stdio.h>

 int main()
{

	char name[100];

	printf("Enter the name :\n");
	fgets(name, sizeof(name), stdin);

	printf("Nmae : \n");
	puts(name);

	return 0;
}

