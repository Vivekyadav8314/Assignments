//without_arguments_without_returnvalue

#include<stdio.h>

void add(); //Function Prototype/Declaratio

int main()
{
	add();//Calling/invoking andd function
	 add();
	 add();
	 
	 return 0;
}

//Function Definition

void add()
{
	int a=5, b=8; // int a=5, b=8, sum;
        int sum =a+b; // sum =a+b;

	printf("Sum = %d\n",sum);

}
