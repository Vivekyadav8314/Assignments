#include<iostream>
using namespace std;

class demo
{
	
        private: int a, b;

        public:demo() //Default Constructor
               {
                       cout<<"Inside Default Constructor"<<endl;
               }

               demo(int a, int b)//Parameterized Constructor
               {
                      this-> a=a;
                      this-> b=b;
               }

               void display()
               {
                       cout<<"Value of a ="<<a<<endl;
                       cout<<"Value of b="<<b<<endl;
               }
};

int main()
{
        demo obj1;

        demo obj2(10, 20);// Implicit type

        obj2.display();

        demo obj3=demo(40,50); //Explicit type

        obj3.display();

        return 0;
}

