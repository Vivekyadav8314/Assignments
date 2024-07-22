#include<iostream>
#include<memory>
using namespace std;

void printarray(shared_ptr<int []>arr, int size)
{
	for (int i =0; i<size; i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

int main()
{
	shared_ptr<int []> arr(new int[5]);

	for(int i=0; i<5;i++)
	{
		arr[i]=i*10;
	}

	cout<<"arr use_count : "<<arr.use_count()<<endl; //Output=1
							 
	printarray(arr, 5);

	//Share the ownership of the array
        shared_ptr<int []> arr2 =arr;
	cout<<"arr use_count after sharing with arr2: "<<arr.use_count()<<endl;
	cout<<"arr2 use_count :" <<arr2.use_count()<<endl;

	printarray(arr2, 5);

	//Share ownership of the aaray with another shared pointer
	shared_ptr<int []>arr3=arr;
	 cout<<"arr use_count after sharing with arr3: "<<arr.use_count()<<endl;
        cout<<"arr3 use_count :" <<arr3.use_count()<<endl;

	printarray(arr3, 5);



       return 0;
}
