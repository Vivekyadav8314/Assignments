#include<iostream>
using namespace std;

class myclass
{
	public: int id;
};

int main()
{
	const int numofobjects=10;

	myclass objects[numofobjects]; //Array to store the objects

	for(int i =0;i<numofobjects;i++)
	{
		objects[i].id=i;
		cout<<"Object with ID : "<<i<<" created"<<endl;
	}

	cout<<"All objects created"<<endl;

	for(int i=0;i<numofobjects;i++)
	{
		cout<<"Object ID :"<<objects[i].id<<endl;
	}

	return 0;
}
