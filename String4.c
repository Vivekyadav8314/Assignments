#include<stdio.h>

void displaystring(char str[]);//Function Prototype

int main()
{
	char str[50];
	printf("Enter the string :\n");
	fgets(str,sizeof(str),stdin);
	displaystring(str); //Passing string to a functio


	return 0;
}

void displaystring(char str[])
{
	printf("String Output:\n");
	puts(str);
}
