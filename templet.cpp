#include<iostream>

//Function Templete
template <typename T>
T add(T a, T b)
{
	return a+b;
}

int main()
{
	std::cout<<add<int>(2,6)<<std::endl;//Output : 8

	std::cout<<add<double>(2.5,7.8)<<std::endl; // Output 10.3

	std::cout<<add<std::string>("Europ, ", "Germany")<<std::endl;//Output Euro Germany

	return 0;
}
