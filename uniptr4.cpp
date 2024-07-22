#include<iostream>
#include<memory>
using namespace std;

int main()
{
	/*Unique ptr m=named arr that menage a dynamically allocated array of integers.
	 using unique ptr, it ensure that the memory for the array is automatically 
	 released when the pointer goes out of scope, preventing memory leaks.
	 */
	unique_ptr<int []> arr(new int [5]);

	for(int i=0;i<5;i++)
	{
		arr[i]=i*5;
	}

	cout<<"Dynamic Array Elements are..."<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}

