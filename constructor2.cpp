#include<iostream>
using namespace std;

class number
{
	private: int a;

	public: number()
		{
			a=99;
		}

		void display()
		{
			cout<<"Value of a ="<<a<<endl;
		}
};

int main()
{
	number n1;
	n1.display();

	return 0;

}
