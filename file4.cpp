#include<iostream>
#include<fstream>

int main()
{
	std::ifstream infile("Wipro.txt");

	if(!infile.is_open())
	{
		std::cerr<<"Unable to open the file";
		return 1;
	}

	if(infile.good())
	{
		std::cout<<"File Wipro.txt is good for I/O operations"<<std::endl;
	}
	infile.close();

	return 0;
}

