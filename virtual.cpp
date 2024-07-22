#include<iostream>
using namespace std;

class clss
{
	public:virtual void percent()  //virtual function
	       {
		       cout<<"Student must achive a minimum of 60% marks to be promoted to the next class"<<endl;
	       }
};

class fourthgrade: public clss
{
	public:void percent()
	       {
		       cout<<"In the 4th grade, 80% of students achive a minimum of 70% marks to be promoted to the next class "<<endl;
	       }
};

class fifthgrade: public clss
{
        public:void percent()
               {
                       cout<<"In the 4th grade, 60% of students achive a minimum of 75% marks to be promoted to the next class "<<endl;
               }
};

class sixthgrade: public clss
{
        public:void percent()
               {
                       cout<<"In the 6th grade, 85% of students achive a minimum of 60% marks to be promoted to the next class "<<endl;
               }
};

class seventhgrade: public clss
{
        public:void percent()
               {
                       cout<<"In the 7th grade, 90% of students achive a minimum of 80% marks to be promoted to the next class "<<endl;
               }
};

class eighthgrade: public clss
{
        public:void percent()
               {
                       cout<<"In the 4th grade, 84% of students achive a minimum of 72% marks to be promoted to the next class "<<endl;
               }
};


//Standalone function
void func(clss *ptr)
{
	ptr->percent();
}

int main()
{
	clss *ptr;

	fourthgrade obj1;
        fifthgrade obj2;
	sixthgrade obj3;
	seventhgrade obj4;
	eighthgrade obj5;

	ptr=&obj1;
	func(ptr);

	ptr=&obj2;
        func(ptr);
     
	ptr=&obj3;
        func(ptr);

	ptr=&obj4;
        func(ptr);

	ptr=&obj5;
	func(ptr);

	return 0;
}


