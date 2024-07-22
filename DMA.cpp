#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number of students :"<<endl;
	cin>>num;

	float *ptr;

	ptr=new float[num];

	cout<<"Enter student's CGPA"<<endl;
	for(int i=0; i<num;i++)
	{
		cout<<"Student "<<i+1<<" : "<<endl;
		cin>>*(ptr+i);
	}
	cout<<"Students CGPR are..." <<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Student "<<i+1<<" :"<<*(ptr+1)<<endl;
	}
	
	delete [] ptr;


		return 0;
	
}
