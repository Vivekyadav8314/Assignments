#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1, 2, 3, 4, 5};

	cout<<"Vector v elements are>>"<<endl;

	for(int i:v)
	{
		cout<<i<< " ";
	}
	cout<<endl;

	v.insert(v.begin()+2, 50); //Insert 50 at the third poistion ofthe vector v

			
	cout<<"Vector v elements after inserting 50 at indux 3 are..."<<endl;

	for(int i:v)
	{
         	cout<<i<<" ";
	}

	cout<<endl;

	return 0;
	}
