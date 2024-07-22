#include<iostream>
using namespace std;

int main()
{
	int num;
	//Read an integer
	cout<<"Enter an integer :"<<endl;
	cin>>num;

	char ch;
	//Read a character
	 cout<<"Enter an character :"<<endl;
         cin>>ch;

	 float fnum;
	 //Read a float value
	 cout<<"Enterr a float nummber:"<<endl;
         cin>>fnum;

	 //Read a string(using getline to capture the spaces)
	 string str;
         cin.ignore(); //Ignore the newline character left by cin
	 cout<<"Enter a string:"<<endl;
	 getline(cin,str);

	 //Display the value
	 cout<<"Integer Valye:"<<num<<endl;
	 cout<<"Character:"<<ch<<endl;
	 cout<<"Float Value:"<<fnum<<endl;
	 cout<<"String:"<<str<<endl;

	 return 0;
}

