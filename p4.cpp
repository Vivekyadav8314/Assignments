#include<iostream>
using namespace std;

void add(int a, int b)
{
	cout<<"Sum:"<<a+b<<endl;
}

void add (double a, double b)
{
	cout<<"Sum:"<<a+b<<endl;
}
int main()
{
	add(10,2);
	add(3.2,4.8);

	return 0;
}
