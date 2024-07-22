#include<iostream>
using namespace std;

namespace Geometry
{
	void printcirclearea(double radius)
	{
		cout<<"Area of circle ="<<3.14259 * radius <<endl;
	}
}

//Extending the namespace Geometry

namespace Geometry
{
	void printrectanglearea(double length, double width)
	{
		cout <<"Area of Rectangle="<<length *width<<endl;
	}
}
 int main()
{
	Geometry::printcirclearea(5.0);
	Geometry::printrectanglearea(4.0, 7.0);

	return 0;
}
			
