#include<iostream>
using namespace std;

class student
{
	public: int stud_id;
		string stud_name;

		void readdata()
		{
			cout<<"ENter the student id:"<<endl;
			cin>>stud_id;
			cout<<"Enter the student name :"<<endl;
			cin>>stud_name;
		}
		void display()
		{
			cout<<"Student ID ="<<stud_id<<endl;
			cout<<"Student Nmae="<<stud_name<<endl;
		}
};

class marks:public student
{
	public: int sub1,sub2;

		void submarks()
		{
			cout<<"Enter the marks of subject 1:"<<endl;
			cin>>sub1;
			cout<<"Enter the marks of subject 2:"<<endl;
			cin>>sub2;
		}
		void displaymarks()
		{
			cout<<"Subject 1 marks="<<sub1<<endl;
			cout<<"Subject 2 marks ="<<sub2<<endl;
		}
};

int main()
{
	marks obj1;

	obj1.readdata();
	obj1.display();
	obj1.submarks();
	obj1.displaymarks();

	return 0;
}
