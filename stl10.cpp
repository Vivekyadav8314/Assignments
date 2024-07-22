#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={10, 20, 30, 40, 50};

	v.clear(); //Clear all the elements of the vector
		   //

	cout<<"Size after cleaning the vector :"<<v.size()<<endl;

	cout<<"Vector elements after clear are.."<<endl;

	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}
