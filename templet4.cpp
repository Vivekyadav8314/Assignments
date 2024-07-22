#include<iostream>

template <typename T>

T add(T a, T b)
{
	return a+b;
}

int main()
{
	int num1=5;
	int num2=8;
	float num3=4.5;
	float num4=3.5;

	int resultInt =add(num1,num2);
	float resultFloat=add(num3, num4);

	std::cout<<"Result of integer addition:"<<resultInt<<std::endl;
	std::cout<<"Result of float  addition:"<<resultFloat<<std::endl;

	return 0;
}
