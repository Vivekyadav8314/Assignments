#include<iostream>
using namespace std;

//create a namespace with a double varible
namespace dbl
{
	double a;
}

int main()
{
	int a=10;
	dbl::a=3.14;

	cout<<"dbl a="<<dbl::a<<endl;
	cout<<"a="<<a<<endl;

	return 0;
}

	
