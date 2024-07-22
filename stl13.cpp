#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>source={3, 5, 7, 9, 11};

	cout<<"Source elements are..."<<endl;
	for(int i:source)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	vector<int>destination(5);//5 is the size of destination vector
	
	copy(source.begin(),source.end(),destination.begin());

	cout<<"Destination elementts are.."<<endl;

	for(int i:destination)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	return   0;
}

