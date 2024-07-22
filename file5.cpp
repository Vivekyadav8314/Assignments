#include<iostream>
#include<fstream>

int main()
{
	//THe below line creates an std::ostream object named outline
	//and opens Wipro.txt file
	//The file wipro.txt is opend in the output mode(std::ios::out) and
	//append mode(std::ios::app)
	std::ofstream outfile("Wipro.txt",std::ios::out| std::ios::app);

	if(outfile.is_open())
	{
		outfile<<"India has just won the T20 world cup for the second time at Barbados under the Rohit's captency\n";
		outfile<<"Germany and France are favourates to win Euro 2024\n";

		outfile.close();
	}

	else
	{
		std::cerr<<"Unable to open the file for appending:";
	}

	return 0;
}
