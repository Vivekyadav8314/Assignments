#include<stdio.h>

//User- defined Macros
//Object-like macros
#define PI 3.14159
#define GREETING "Wipro Training"
//Function-like Macros
#define SQUARE(x) ((x) * (x))
#define CIRCLE_AREA(r) (PI * (r) * (r))

int main()
{
	printf("%s\n", GREETING);
	printf("Value of PI : %f\n", PI);

	int number = 6;

	printf("Square of %d is %d \n", number, SQUARE(number));

	double radius =3.0;
	printf("Area of circle with the redius %.2f : %.2f\n", radius, CIRCLE_AREA(radius));
	return 0;
}

