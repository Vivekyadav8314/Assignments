#include<iostream>
using namespace std;

namespace Longnamespacename
{
	void display()
	{
		cout<<"Inside Longnamespacename namespace"<<endl;
	}
}
int main()
{
	namespace lnn=Longnamespacename;

	lnn::display();

	return 0;
}

