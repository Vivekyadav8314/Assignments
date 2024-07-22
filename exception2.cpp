#include<iostream>
using namespace std;

int x=5;

int main()
{
	try
	{
		int x;
		cout<<"ENter the value of x :"<<endl;
		cin>>x;

		if(x==0)
			throw x;
		else if(x>0)
			throw 'x';
		else 
			throw "x is negative";
	}
	catch(int i)
	{
		cout<<"Caught an int exception"<<" "<<i<<endl;

	}
	catch(char c)
	{
		cout<<"Caught a char exception"<<" "<<c<<endl;
	}
	catch(char *str)
	{
		cout<<"Caught a string exception"<<" "<<str<<endl;
	}

	return 0;
}
