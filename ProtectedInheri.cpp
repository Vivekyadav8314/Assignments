#include<iostream>
using namespace std;

class shape//Base class
{
        protected: int side1, side2;

        public: int area;

                 void compute()
                 {
                         area=side1*side2;
                 }
};

//Protected Inheritance
class rectangle:protected shape
{
        public:void readdata()
               {
                       cout<<"Enter the input for side1 :"<<endl;
                       cin>>side1;
                       cout<<"Enter the input for side2:"<<endl;
                       cin>>side2;
               }
               void display()
               {
                       compute();
                       cout<<"Area of rectangele ="<<area<<endl;
               }
};

int main()
{
        rectangle R;

        R.readdata();

	R.display();

	return 0;
}


