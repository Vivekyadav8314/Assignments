#include<iostream>
using namespace std;

class coffee //Base Class 1
{
	public:coffee()
	       {
		       cout<<"Coorg and Chickmagulur cities are famous coffee plantation"<<endl;
	       }
};

class tea //Base class 2

{
	public:tea()
	       {
		       cout<<"Darjeeling and Jorhat(assam) are famous for tea plantatio"<<endl;
	       }
};
class milk //Base  Class 3
{
	public:milk()
	       {
		       cout<<"Anand city(GUjarat) is famous for milk production(Amul)"<<endl;
	       }
};

class beverages:public coffee, public tea, public milk
{
    

};

int main()
{


	beverages obj1;

	return 0;
}



