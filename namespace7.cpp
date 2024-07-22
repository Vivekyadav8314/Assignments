//Anonymous /Unnamed Namespace
#include<iostream>
using namespace std;
namespace
{
	int a=10;
	
	void sample()
	{
		cout<<"THis sample function with value="<<a<<endl;
	}

}

namespace
{
	int a1=10;

	void sample1()
	{
		cout<<"THis sample function with value="<<a1<<endl;
	}
}
int main()
{
	sample();

	sample1();
	return 0;
}

	
