#include<iostream>
#include<list>
using namespace std;

int main()
{

	//Creat the list
	list<int>numbers{1, 2, 3, 4, 5};

	cout<<"List elements are..."<<endl;
	for(int i:numbers)
	{
		cout<<i<<" ";
	}

	cout<<endl;

	return 0;
}

