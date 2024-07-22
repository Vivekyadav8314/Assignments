#include<iostream>
using namespace std;

namespace Math
{
	double pi=3.14159;

	double add(double a, double b)
	{
		return a+b;
	}

	double multiply(double a, double b)
	{
		return a*b;
	}
};

int main()
{
	cout<<"PI ="<<Math::pi<<endl;
	cout<<"Add ="<<Math::add(3.0,5.0)<<endl;

	cout<<"Multiply ="<<Math::multiply(3.4,2.3)<<endl;

          return 0;
}	  


