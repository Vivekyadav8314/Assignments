//Combining namesoace
#include<iostream>
using namespace std;

namespace Math
{
	double add(double a, double b)
	{
		return a+b;
	}

}
namespace Physics
{
	using namespace Math; //Use everything from Math namespace

	double force(double mass, double acceleration)
	{
		return mass*acceleration;
	}
}
int main()
{
	cout<<"Force=" <<Physics::force(10, 7.9)<<endl;
	cout<<"Sum=" <<Physics::add(5.0, 6.8);

	return 0;
}

