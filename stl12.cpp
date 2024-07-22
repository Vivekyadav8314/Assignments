#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

	vector<int>v={4,3,9,77};

	cout<<"Vector elements are..."<<endl;
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	sort(v.begin(), v.end());
	cout<<"Sorted vector elements are.."<<endl;

	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;

}
