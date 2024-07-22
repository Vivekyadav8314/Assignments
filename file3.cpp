//C++ program to open an existing file, read the contents and display on the console

#include<iostream>
#include<fstream>

int main()
{
        std::ifstream infile("Wipro.txt"); //It creat an std::ifstream object named infile and open the file name example.txt


        std::string line; //It declares a string varibale named line which will be used to stroe each line read from the file

        if(infile.is_open())
        {
                while(std::getline(infile,line))
                {
                        std::cout<<line<<std::endl;
                }

                 infile.close();
        }

        else
        {
                std::cerr<<"Unable to open file for reading.\n";
        }
        return 0;
}

