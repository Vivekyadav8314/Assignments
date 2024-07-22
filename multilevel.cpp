#include<iostream>
using namespace std;

class grandfather //Base class
{
	public:void assets1()
	       {
		       cout<<"Grand Father was having 50 acres of land "<<endl;

	       }

};

class father: public grandfather //father is the derived class
{
        public:void assets2()
	       {
		       cout<<"Father is having 3 3-BHK Apartments"<<endl;
	       }
};

class son:public father
{
	public:void assets3()
	       {
		       cout<<"Son is havinf=g Triumph TIger 900 and Audi Car"<<endl;
	       }
	       void output()
	       {
		       assets1();
		       assets2();
		       assets3();
	       }

};

int main()
{
	son obj1;
        obj1.output();

	return 0;
}


	

