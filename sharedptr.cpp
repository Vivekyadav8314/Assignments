#include<iostream>
#include<memory>
using namespace std;

class myclass
{
	public:char title[30]={'C',' ', 'p', 'r', 'o', 'r', 'r', 'a', 'm', 'm', 'i', 'n', 'g', '\0'};

	       /*
	       void display()
	       {
		       cout<<"C programming Complete Reference by Herbert Schield"<<endl;
	       } */
};

int main()
{
	shared_ptr<myclass>p1(new myclass());

	//Initialize the pointer p1 as you would normally do with a normal pointer
	

	cout<<p1->title<<endl;

	shared_ptr<myclass>p2;

	p2=p1;

	//This will also print the same title as printed by p1.
	

	cout<<p2->title<<endl;

	shared_ptr<myclass>p3;
	p3=p2;

	cout<<p3->title<<endl;

	cout<<p1.use_count()<<endl;

	//This will print 2 as reference counter is 2
	//THe memory will only be freed when bothe the pointers p1 and p2 have goen out of scope
	
	return 0;
}
