#include<iostream>
#include<memory> //This file is necessary for smart pointers
using namespace std;

class myclass
{
	public:
		myclass()
		{
			cout<<"myclass constructor"<<endl;
		}

		~myclass()
		{
			cout<<"myclass destructor "<<endl;

		}
		void display()
		{
			cout<<"Hello from unique pointer"<<endl;
		}

};
int main()
{
	unique_ptr<myclass>ptr1(new myclass());
        /*THe above line creates a aunique _ptr named ptr1 that manages a dynamically allocate myclass object.
	 using unique_ptr, it ensure that the memory is automatacally released when the pointer goes out of scope
          thereby preventing memory leakes 
	*/ 

	ptr1->display();

	return 0;
}

