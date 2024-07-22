#include<iostream>
using namespace std;

class shape//Base class
{
	public: int side1, side2;
};


class rectangle:public shape //shape is the derived class inherited from shap

{
	public: int area;

		 void compute()
		 {
			 area=side1*side2;
		 }
};

int main()
{
	rectangle R;
	R.side1=5;
	R.side2=6;
	R.compute();
	cout<<"Area of rectangle ="<<R.area<<endl;

	return 0;
}


