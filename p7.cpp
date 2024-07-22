//C++ program to illustrate the working of class and object
//
#include<iostream>
using namespace std;

class room
{
	public:double length, breadth,height;//Data Member

	       double calculate_area()//Member Function 1
	       {
		       return length*breadth;
	       }

	       double calculate_volume()//Member Function 2

	       {
		       return length* breadth*height;
	       }
};

int main()
{
	room obj1;//room is the class and obj1 is the object
		  obj1.length=42.5;
		  obj1.breadth=30.1;
		  obj1.height=15.2;

		  cout<<"Area of Room="<<obj1.calculate_area()<<endl;

		  cout<<"Area of Room="<<obj1.calculate_area()<<endl;
       
		  return 0;
}


	     
