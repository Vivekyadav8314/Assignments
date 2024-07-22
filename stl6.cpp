#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1, 2, 3, 4, 5};

	cout<<"Vector elements are.."<<endl;
	
	for( int i:v)
	{
		cout<<i<< " ";
	}
	cout<<endl;

	v.pop_back(); //pop_back will remove the last element of the vector i.e,5

	cout<<"vector v elements after pop_back"<<endl;

	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	v.erase(v.begin()+1); //Remove the second elements at index at 1
			      //

	cout<<"Vector elements after erase()"<<endl;

	for(int j:v)
	{
		cout<<j<<" ";
	}
	cout<<endl;

	return 0;
}

