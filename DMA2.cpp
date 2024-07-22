#include<iostream>
using namespace std;

class student
{
	private: int age;

	public:student()
	       {
		       age=22;
	       }
	       void displayage()
	       {
		       cout<<"Age ="<<age<<endl;
	       }
};

int main()
{
	//dynamically declare student object
	student *ptr=new student();

	//Call displayage() function using arrow operator ->
	
	ptr->displayage();

	delete ptr;

	return 0;
}
