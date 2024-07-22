//without_arguments_with_returnvalue

#include<stdio.h>

int add(); //Function Prototype/Declaratio

int main()
{
	
        int s=add();//Calling/invoking add function
         
	printf("Sum -%d\n",s);

         return 0;
}

//Function Definition

int add()
{
        int a=5, b=8; // int a=5, b=8, sum;
        int sum =a+b; // sum =a+b;

        return sum;

}

