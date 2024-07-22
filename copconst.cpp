#include<iostream>
using namespace std;

class sample
{
	private: int a, b;

	public: sample() //Default Constructor

		{
			cout<<"INSIDE DEFAULT CONSTRUCTOR"<<endl;
		}

		sample(int x, int y) //Parameterized comnstructor
		{
			a=x;
			b=y;
		}

		sample(sample &obj)//Copy constructors that takes reference of the object belongd to class
		{
			a=obj.a;
			b=obj.b;

		}
		void display()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};

int main()
{
	sample s1; //Invokes Default constructors
	sample s2(10, 20); //Invokes parameterize constructors
        
	sample s3(s2); //Invokes copy constructor

	s2.display();
	s3.display();
	return 0;
}

