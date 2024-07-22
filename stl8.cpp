#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v;

	int n ,element;

	cout<<"Enter the number of elements you want to add:"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<"  :  "<<endl;
		cin>>element;
		v.push_back(element);
	}

	cout<<"Elements of vector v are..."<<endl;
	for(int i:v)
	{
		cout<<i<<" ";
	}

	cout<<endl;

	return 0;
}
