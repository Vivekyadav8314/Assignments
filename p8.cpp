# include<iostream>
using namespace std;

class student
{
	public: char name[50];
		int age;

		void input()
		{
			cout<<"ENter your Name :"<<endl;
			cin>>name;

			cout<<"ENter your age :"<<endl;
                        cin>>age;
		}
		void display()
		{
			cout<<"Name is :"<<name<<endl;
			cout<<"Age is :"<<age<<endl;
		}

};

int main()
{
	student obj1, obj2, obj3;
	obj1.input();
	obj1.display();

	obj2.input();
        obj2.display();

	obj3.input();
        obj3.display();

	return 0;
}
