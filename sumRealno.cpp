#include<iostream>
using namespace std;

class complx
{
           private:int real, imag;
	   
           public: void input()
		   {
			   cout<<"Enter real and imaginary part respectively:"<<endl;
			   cin>>real>>imag;
		   }

		   complx operator + (complx obj)
		   {
			   complx temp; //temp is a varibale fo type class

			   temp.real=real+obj.real;
			   temp.imag=imag+obj.imag;

			   return temp;
		   }

		   void display()
		   {
			   cout<<real <<" + "<<imag<<" i "<<endl;
		   }
};

int main()
{
	complx com1,com2,res;

	cout<<"Enter the first complex number :"<<endl;
	com1.input();

	cout<<"Enter the second complex number :"<<endl;
	com2.input();

	res=com1+com2;

	res.display();

	return 0;
}
