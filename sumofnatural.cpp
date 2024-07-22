#include<iostream>
using namespace std;

class Natural
{
	private: int a,sum;

	public: Natural(int num)
		{
			a=num;
			sum=0;

			for(int i=1;i<=a;i++)
			{
			  sum +=i;
			}

		}

		void printSum()
		{
			cout<<"Sum of natural numbe"<<"is :"<<sum<<endl;
		}
};

int main()
{
     	int number;

	cout<<"Enter a Natural number:";
	cin>>number;

	Natural obj(number);

	obj.printSum();

	return 0;
}
