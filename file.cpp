//C++ program to creat and write into the file

#include<iostream>
#include<fstream>

int main()
{
	std::ofstream outfile("Wipro.txt");/*This line creates an std::ofstem object named outfile and opens/creates the new file wipr.txt                                                 for writing*/

	if(outfile.is_open())  /*if(outfile.is_open()) This line check if the file was successfully opend. is_open() method returns TRUE if                                   the file is open and ready for writing and FALSE otherwise*/
	{
		outfile<<"Wipro is one of the TOp MNC.\n"; /*If the file is open, this line writes the string ... to the files wipro.txt                                                                   <<operator is used to write to the file stream */

		outfile<<"We are in monthe of July.\n";

		outfile.close();
	}
	else
	{
		std::cerr<<"Unable to open the file wipro.txt for writing!";
	}

	return 0;
}


