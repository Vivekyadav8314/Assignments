#include<iostream>
using namespace std;

class base//Base Class
{
	public: void print()
		{
			cout<<"INSIDE THE BASE CLASS FUNCTION PRINT()"<<endl;
		}
};

class derived: public base
{
	public:void print()
	       {
		       cout<<"INSIDE THE DERIVED CLASS FUNCTION PRINT()"<<endl;
	       
	                //  base::print();
	       }
};

int main()
{
	derived d;

	d.print();


return 0;
}
