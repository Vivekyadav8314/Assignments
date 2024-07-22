//File to delet
#include<iostream>
#include<fstream>

int main()
{

	const char* filename="wipro.txt";

	if(std::remove(filename)==0)
	{
		std::cout<<"File deleted successfully"<<std::endl;
	}

	else
	{
		std::cerr<<"Unable to delet the file"<<std::endl;
	}

	return 0;
}
