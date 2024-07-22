#include<iostream>
using namespace std;

class parent
{
	public:void display()
	       {
		       cout<<"parent class"<<endl;
	       }
};

class child:public parent
{
         public:void display()
          {
		  cout<<"child class"<<endl;
	  }
};

int main()
{
	child c;

	parent *ptr=&c; //pointer of parent type that point to derived c

	ptr->display();

	return 0;
}
