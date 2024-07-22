//With Argument without return

#include<stdio.h>

void add(int a, int x); //Function prototype
			
int main()
{
	int a=8, b=5;

	add(a,b);//Function Call/invoking the functon add

	return 0;

}

//Function Definintion
void add(int x, int y)
{
	int sum= x+y;
	printf("Sum =%d\n",sum);
}
