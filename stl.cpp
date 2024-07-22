#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Create a vector of int type
	vector<int> numbers{1, 2, 3, 4, 5};


	//print the vector elements using renged loop

	cout<<"Vector elements are..."<<endl;
	for(int  i:numbers)
	{
		cout<<i<< " ";
	}

	cout<<endl;

	return 0;
}

