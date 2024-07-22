#include<iostream>
#include<memory>
using namespace std;

void modifyarray(shared_ptr<int []> arr, int size)
{
	for (int i=0;i<size; i++)
	{
		arr[i]+=5;
	}
}

void printarray(shared_ptr<int []>& arr, int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	shared_ptr <int []> arr(new int [5]);

	for (int i=0;i<5;i++)
	{
		arr[i]=i*10;
	}

	modifyarray(arr, 5);
	printarray(arr, 5);

	return 0;
}

