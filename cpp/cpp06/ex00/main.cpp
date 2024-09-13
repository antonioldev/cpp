#include "ScalarConverter.hpp"

/*Static Cast
This is the simplest type of cast that can be used.
It is a compile-time cast.
It does things like implicit conversions between types
(such as int to float, or pointer to void*), 
and it can also call explicit conversion functions.*/

int main()
{
	ScalarConverter::convert("bb");
	std::cout << std::endl;
	ScalarConverter::convert("54.5f");
	std::cout << std::endl;
	ScalarConverter::convert("42.0");
	std::cout << std::endl;
	ScalarConverter::convert("c");
	std::cout << std::endl;
	ScalarConverter::convert("inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("68");
	std::cout << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;
	
	return(0);
}