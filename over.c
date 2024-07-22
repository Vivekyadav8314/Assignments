#include<iostream>
using namespace std;

class increase
{
	private: int value;

	public: increase() //Constructor
		{
			value =10;
		}

		void operator ++()
		{
			valie =value + 15;
		}
		void display()
		{
			cout<<"Final value ="<<value<<endl;
		}
};

int main()
{
	increase obj1;
	++obj1;

	obj1.display();

	return 0;
}
