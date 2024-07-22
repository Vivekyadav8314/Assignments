#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a=5, b=10;

	cout<<"Before Swap: a= "<< a<<" , b= "<<b<<endl;

	swap(a,b);

	cout<<"After Swap: a= "<<a <<", b="<<b<<endl;

	vector<int>v1={1, 2, 3,};
	vector<int>v2={4, 5, 6};

	cout<<"BEFORE SWAP:" <<endl;
	cout<<"v1: ";
	for(int i:v1)
	{
		cout<<i<<" ";
	}
	cout<<endl;

  	cout<<"BEFORE SWAP:" <<endl;
        cout<<"v2: ";
        for(int i:v2)
        {
                cout<<i<<" ";
        }
        cout<<endl;

	swap(v1,v2);

        cout<<"After SWAP:" <<endl;
        cout<<"v1: ";
        for(int i:v1)
        {
                cout<<i<<" ";
        }
        cout<<endl;

        cout<<"After SWAP:" <<endl;
        cout<<"v2: ";
        for(int i:v2)
        {
                cout<<i<<" ";
        }
        cout<<endl;

	return 0;
}



