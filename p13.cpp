#include<iostream>
using namespace std;

inline int cube(int a)
{
	return a*a*a;
}

int main()
{
	int n;

	cout<<"Enter the number to find the cube :"<<endl;
	cin>>n;

	cout<<"Cube of "<<n<<"="<<cube(n)<<endl;

	return 0;
}

