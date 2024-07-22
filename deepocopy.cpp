#include<iostream>
using namespace std;

class demo
{
	private: int data1, data2;
		 int *p;

	public: demo() //Default Constructors

		{
			p=new int;
		}

		demo(demo &d) //Copy constructor
			    {
				    data1=d.data1;
				    data2=d.data2;
				    p=new int;
				    *p=*(d.p);
			    }
		void setvalues(int a, int b, int c)
		{
			data1=a;
			data2=b;
			*p=c;
		}

		void display()
		{
			cout<<"data1 ="<<data1<<endl;
			cout<<"data2 ="<<data2<<endl;
			cout<<" *p ="<<*p<<endl;
		}
};

int main()
{
	demo obj1;
        obj1.setvalues(40, 50, 60);

	obj1.display();

	demo obj2=obj1;
	obj2.display();

	return 0;
}
	



