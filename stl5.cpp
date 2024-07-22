#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v={1, 2, 3, 4, 5};

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

	cout<<"Using ranged loop"<<endl;

	for (int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}

