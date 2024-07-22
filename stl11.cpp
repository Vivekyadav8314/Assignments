#include<iostream>
#include<vector>
using namespace std;

int main()
{

	vector<string>languages={"C\n", "C++\n", "Rust\n", "Pythin\n"};

	//Create an iterator to a string vector


/*	for(string i:languages)
	{
		cout<<i<<endl;
	}
*/

	vector<string>::iterator itr;

	//iterate over all the string elements
	
	for(itr=languages.begin();itr!=languages.end(); itr++)
	{
		cout<<*itr<<" ,";
	}

	return 0;
}
