#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1, 2, 3, 4, 5};

	cout<<"Vector v elements are..."<<endl;
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	v.resize(3); //Resize the vector v to contain 3 elements

	cout<<"Vector elements after resizing are..."<<endl;

	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	v.resize(10, 99);

	cout<<"Vector element after resiging from 3 to 10"<<endl;

	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}
