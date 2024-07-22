#include<iostream>
using namespace std;

class demo
{
	private: int data1, data2;

	public: void setvalues(int a, int b)

		{
			data1=a;
			data2=b;
		}

		void display()
		{
			cout<<"Data1 ="<<data1<<endl;
			cout<<"Data2 ="<<data2<<endl;
		}
};

int main()
{
	demo obj1;
	obj1.setvalues(40, 50);

	obj1.display();

	demo obj2=obj1;//shallow copy

	obj2.display();

	return 0;
}
