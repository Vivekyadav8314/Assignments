#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20]="C programming";
	char str2[50];

	//Copying str1 to str2
	strcpy(str2, str1);

	puts(str2); //C programming

	return 0;
}
