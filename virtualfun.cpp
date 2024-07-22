#include<iostream>
using namespace std;

class base
{
	public: virtual void display() //Virtual function


		{
			cout<<"Display Base Class"<<endl;
		}
		void display2()//Non virtuak function
		{
			cout<<"Display Base Class using non-virtual function"<<endl;
		}
};

class derived: public base
{
	void display()
	{
		cout<<"Display Derived class using non virtual function"<<endl;
	}
	void display2()
	{
		cout<<"Display Derived Class using no virtual function"<<endl;
	}
};

int main()
{ 
	base *ptr;
	
	derived obj1;

	ptr=&obj1;

	ptr->display();//Virtual function binded at runtime
	ptr-> display2();//non-virtual function binded ar compile time

	return 0;
}






