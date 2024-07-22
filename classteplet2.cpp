#include<iostream>
using namespace std;

//base class templet
template <typename T>
class base
{
	public: T value;

		base(T val) : value(val) {}

		void display() const
		{
			cout<<"Base class value ="<<value<<endl;
		}
};

//Derived class templete
template <typename T>
class derived: public base <T>
{
	public:derived(T val) : base <T>(val) {}

	       void displayderived() const
	       {
		       cout<<"Derived class value ="<<this->value<<endl;
	       }
};

int main()
{
	derived<int>obj1(10);
	obj1.display();
	obj1.displayderived();

	derived<double> obj2(3.1);
	obj2.display();
	obj2.displayderived();

	return 0;
}
