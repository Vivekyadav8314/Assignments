#include<iostream>
using namespace std;

int main()
{
	int *pointint;
	float *pointfloat;

	
	pointint=new int; //Allocatr the memeory for a during the runtime using new operator
        pointfloat=new float;

	*pointint=45;
        *pointfloat=45.4;

	cout<<"Value of pointint ="<<*pointint<<endl;
	cout<<"Value if pointfloat ="<<*pointfloat<<endl;

	delete pointint;
	delete pointfloat;

	return 0;
}

