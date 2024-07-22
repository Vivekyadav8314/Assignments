// C program to demonstrate explicit conversion


#include<stdio.h>

int main()
{
	int a= 5, b=6, c=2;
	float avg;

	avg=(float)(a+b+c)/3; //Expicit conversion
			     //
			     
	printf("Average : %.2f\n " , avg);

	return 0;
}
