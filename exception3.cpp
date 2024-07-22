#include<iostream>
using namespace std;

int main()
{
	try
	{
		cout<<"Inside Try"<<endl;

		int age;

		cout<<"Enter your age :"<<endl;
		cin>>age;

		if(age>=18)
		{
			cout<<"Access Granted Eligible to Vote~"<<endl;
		}
		else
		{
			throw(age);
				
		}
	}
	
	catch (int x)
		{
			cout<<"Access Denied, Not ELigible!"<<endl;
			cout<<"Age is:"<<x<<endl;
		}

	return 0;
}
