#include<iostream>
using namespace std;

class bank
{
	public:virtual void interest()  //virtual function
	       {
		       cout<<"As per RBI Guidlines, all banks should give >=4.5% of interest to FD Amount Rs.50,oo,ooo"<<endl;
	       }
};

class indianbank: public bank
{
	public:void interest()
	       {
		       cout<<"Indian Bank is giving 5.5% of interest to FD AMount of Rs. 50,00,000"<<endl;
	       }
};

class sbi: public bank
{
        public:void interest()
               {
                       cout<<"SBI Bank is giving 6.5% of interest to FD AMount of Rs. 50,00,000"<<endl;
               }
};

class hdfc: public bank
{
        public:void interest()
               {
                       cout<<"HDFC Bank is giving 7.5% of interest to FD AMount of Rs. 50,00,000"<<endl;
               }
};

class axis: public bank
{
        public:void interest()
               {
                       cout<<"Axis Bank is giving 5.1% of interest to FD AMount of Rs. 50,00,000"<<endl;
               }
};

//Standalone function
void func(bank *ptr)
{
	ptr->interest();
}

int main()
{
	bank *ptr;

	indianbank obj1;
	sbi obj2;
	hdfc obj3;
	axis obj4;

	ptr=&obj1;
	func(ptr);

	ptr=&obj2;
        func(ptr);
     
	ptr=&obj3;
        func(ptr);

	ptr=&obj4;
        func(ptr);

	return 0;
}




