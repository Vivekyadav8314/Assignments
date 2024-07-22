//With Argument with return

#include<stdio.h>

int add(int a, int b); //Function prototype
			
int main()
{
	int a=8, b=12;
 
       // int s=add(a,b);//Function Call/invoking the functon add
        printf("Sum =%d\n",add(a,b));

	int s1=add(20,30);//Function call/Invoking the function
	printf("Sum=%d\n", s1);

	return 0;

}

//Function Definintion
int add(int a, int b)
{
	int sum= a+b;
	return sum;
}

