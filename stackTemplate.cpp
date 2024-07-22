//Stack
#include<iostream>
using namespace std;

template <typename T>
class stack
{
	private: T* arr; //Dyna,ic array to store the stack elements
	        int capacity; //Max. capacity of the stack
	        int topindex;//Index of the top element in the stack

	public: //constructor to intialize the stack
		stack(int size=100)
		{
			capacity=size;
			arr=new T[capacity];
			topindex=-1;//Stack is empty

		}

		//destructor to free the stack
		~stack()
		{
			delete[] arr;
		}

		//Push theeeeee elements in the stack

		void push(const T& element)
		{
			if(topindex ==capacity -1)
			{

				throw out_of_range("Stack Overflow");
			}

			arr[++topindex]=element;
		}

		//Pop elements from the stack
		void pop()
		{
			if(topindex== -1)
			{
				throw out_of_range("Stack Underflow");
			}

			--topindex;
		}

		//Peek: get the top element of the stack
		
		T top()
			{
				if (topindex ==-1)
				{
					throw out_of_range("Stack is empty");
				}
				return arr[topindex];
			}
		
		bool isempty()
		{
			return topindex==-1;
		}

		int size()
		{
			return topindex+1;
		}
};

int main()
{
	try
	{
		stack<int> intstack(10); //stack of integers with capacity 10

		intstack.push(1);
		intstack.push(2);
		intstack.push(3);

		cout<<"Top element : "<<intstack.top()<<endl; //output 3

		intstack.pop();
		cout<<"Top element after pop :"<<intstack.top()<<endl;

		cout<<"Stack Size :"<<intstack.size()<<endl;
		cout<<"Is Stack Empty :"<<(intstack.isempty() ? "Yes" : "No")<<endl;
	}

	catch(const exception& e)
	{
		cout<<e.what()<<endl;
	}
	return 0;
}





