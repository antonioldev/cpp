#include "ScalarConverter.hpp"

int main()
{
	ScalarConverter::convert("bb");
	std::cout << std::endl;
	ScalarConverter::convert("54.5f");
	std::cout << std::endl;
	ScalarConverter::convert("42.0");
	std::cout << std::endl;
	ScalarConverter::convert("a");
	std::cout << std::endl;
	ScalarConverter::convert("inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;
	
	return(0);
}