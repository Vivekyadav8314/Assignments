#include<iostream>
using namespace std;

class cricket//cricket is the base class
{
	public:void modeofplay()
	       {
		       cout<<"Cricket will be played b/w two countries. Fisrat Match was b/w AusvENF"<<endl;
	       }
};

class test:public cricket//test is the derived class 1
{
	public:void modeofplay2()
	       {
		       cout<<"Test cricket will be played b/w 2 countries for 5 ddays."<<endl;
	       }
};

class odi:public cricket//odi is the drivesd class 2
{
	public: void modeofplay3()
		{
			cout<<"ODI cricket is played b/w 2 countries only for 50 overs each"<<endl;
		}
};
class t20:public cricket //t20 is the derived class 3
{
	public: void modeofplay4()
                {
                        cout<<"T20 cricket is played b/w 2 countries only for 20 overs each"<<endl;
                }
};
class t10:public cricket //t10 is the derived class 4
{                               
        public: void modeofplay5()
                {
                        cout<<"T10 cricket is played b/w 2 countries only for 10 overs each"<<endl;
                }    
}; 
int main()
{
	t10 obj1;
	obj1.modeofplay();
        obj1.modeofplay5();

	t20 obj2;
	obj2.modeofplay();
	obj2.modeofplay4();

	odi obj3;
        obj3.modeofplay();
	obj3.modeofplay3();

	test obj4;
	obj4.modeofplay();
	obj4.modeofplay2();

	return 0;
}
