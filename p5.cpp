/*
#include<iostream>
using namespace std;

void add(int a, int b)
{
	cout<<"Sum="<<a+b<<endl;
}

void add(int a, double b)
{
	cout<<"Sum="<<a+b<<endl;
}
void add(int a, int b, int c)
{
	cout<<"SUm="<<a+b+c<<endl;
}
void add(double a, int b)
{
	cout<<"Sum ="<<a+b<<endl;
}
int main()
{

	add(10,2);
	add(5,7.8);
	add(10,3,1);
	add(3.1,9);

	return 0;
}*/

#include<iostream>
using namespace std;

void add(int a, int b)
{
    cout<<"Sum ="<<a+b<<endl;
}

void add(int a, double b)
{
    cout<<"Sum ="<<a+b<<endl;
}

void add(int a, int b, int c)
{
    cout<<"Sum ="<<a+b+c<<endl;
}

void add(double a, int b)
{
    cout<<"Sum ="<<a+b<<endl;
}

int main()
{
    add(10,2);
    add(5,7,8);
    add(10,3.1);
    add(3.1,9);

    return 0;
}
