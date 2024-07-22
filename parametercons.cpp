#include<iostream>
using namespace std;

class number
{
	private: int a,b;

	public: number() //Default Constructor
		{
			cout<<"June 28 2024"<<endl;
		}
		 number(int m, int n) //Parameterized COnstructor
		 {
			 a=m;
			 b=n;
		 }

		 void display()
		 {
			 cout<<"a="<<a<< "and "<<"b ="<<b<<endl;
		 }
};

int main()
{
	number obj1;
	number obj2(10,20); //Implicit call

	obj2.display();

	number obj3=number(40,50); //Explicit call
	obj3.display();

	return 0;
}
