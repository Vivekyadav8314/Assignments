#include<stdio.h>

void add(int a, int b);

int main()
{
	printf("Demo for stop command in GDB\n");
	 int a=10, b=20;
         
	 add(a,b);

	 return 0;
}
void add(int a, int b)
{
	 printf("Sum of %d and %d is %d\n" ,a, b, a+b);
}
