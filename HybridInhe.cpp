#include<iostream>
using namespace std;

class student
{

};

class seminar:public student
{
	public:void sem_topic()
	       {
		       cout<<"Successfully delivered seminar on the topic Cloud Computing"<<endl;
	       }
};

class project:public student
{
	public: void project_title()
		{
                       cout<<"Done project on Rainfall Predication using DAV and ML ALgotithms"<<endl;

		}
};

class result:public seminar, public project
{
	public: void final_result()
		{
			cout<<"Completed tge cource wiht FCD"<<endl;
		}
};

int main()
{
	result obj1;
	obj1.sem_topic();
	obj1.project_title();
	obj1.final_result();

	return 0;
}
