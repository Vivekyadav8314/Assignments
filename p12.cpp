//Write a C++ program to find the simple Interest using class and ibjects

#include<iostream>
using namespace std;

class SI
{
	private: float principal, rate;
		 int time;

	public: 
		 SI(float p, float r, int t)
		 {
			 principal =p;
			 rate =r;
			 time=t;
		 }

	float calculate_SI()
	{
		float interest=(principal*rate*time)/100;
		return interest;
	}
};

int main()
{
	float principal, rate;
	int time;

	cout<<"Enter Principal amount, rate, time:";
	cin>>principal, rate, time;

	
