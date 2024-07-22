#include<iostream>
//#include directive tells the preprocessor to include the constents of the specified file in the prograaaaaam before the compilation begains
//It effectively copies the count of the header file to source file

//<iostream>: THis is the header file thatttttttt declares the standard I/O stream objects such as std::cout, std::cin, std::cerr
//Here cout stand for character output- Standard Output Stream which is usded to print the data to the console
//cin stands for character Input-Standard Input Stream which is use to read data from the console
//std stands for standard
//::scope resolution operator
//istream and ostream are classes in C++ standard library that provides foundation for using input and Output Operations
//together istream and ostream ===> iostream
int main()
{
          
	std::cout<<"Welcome to C++ Programming"<<std::endl;//Insertion operator and endl is an output manipulator used with ostream
							    //a newline character into the output and then flush the output buffe

	return 0;
}

/*#include<iostream>
 using namesapace

 int main()
 {
   count <<Welcome to C++",,endl;

   return 0;
   }
   */
