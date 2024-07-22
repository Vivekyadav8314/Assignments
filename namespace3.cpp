//Multiple and Nested Namespaces

#include<iostream>
using namespace std;

namespace one
{
	void display()
	{
		cout<<"namespace one"<<endl;
	}

	//create another namespace inside namsespace one
	
	namespace one_one
	{
		void display()
		{
			cout<<"namespace one_one"<<endl;
		}

	}

}

namespace two
{
	void display()
	{
		cout<<"namespace two"<<endl;
	}
}

void display()
{
	cout<<"Not a namespace just user define function by name display()"<<endl;

}

int main()
{
	one::display();

	one::one_one::display();

	two::display();

	display();

	return 0;
}

