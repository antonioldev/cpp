#include "ScalarConverter.hpp"




#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <sstream>



bool isChar(const std::string& str)
{
	if (str.length() == 1 && std::isalpha(str[0]))
		return (true);
	return (false);
}

bool isInt(const std::string& str)
{
	char* end;
	std::strtol(str.c_str(), &end, 10);
	return (*end == '\0');
}

bool isDouble(const std::string& str) 
{
	char* end;
	std::strtod(str.c_str(), &end);
	return (*end == '\0');
}

bool isFloat(const std::string& str)
{
	char* end;
	std::strtof(str.c_str(), &end);
	return (*end == 'f');
}

void toInt(void type)
{
	float i = static_cast<float>(type);
	if (i == std::numeric_limits<float>::infinity()
		|| i == -std::numeric_limits<float>::infinity()
		|| std::isnan(i))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void toFloat(void type)
{
	float f = static_cast<float>(type);
	std::cout << "float: " << std::fixed << f << "f";
		std::cout << std::endl;
}

// void toDouble(void type)
// {
// 	double f = static_cast<double>(type);
// 	std::cout << "double: " << std::fixed << f << "f";
// 		std::cout << std::endl;
// }

// void toChar(void type)
// {
// 	int i = static_cast<int>(std::atoi(str.c_str()));
// 	if (isprint(i))
// 		std::cout << "int: " << static_cast<char>(i) << std::endl;
// 	else
// 		std::cout << "char: Non displayable" << std::endl;
// }

int main()
{
	// ScalarConverter::convert("bb");
	// std::cout << std::endl;
	// ScalarConverter::convert("42.5f");
	// std::cout << std::endl;
	// ScalarConverter::convert("42.0");
	// std::cout << std::endl;
	// ScalarConverter::convert("0");
	// std::cout << std::endl;
	// ScalarConverter::convert("inf");
	// std::cout << std::endl;
	// ScalarConverter::convert("-inf");
	// std::cout << std::endl;
	// ScalarConverter::convert("nan");
	

	std::string str = "a";

	if (isChar(str))
	{
		int i = static_cast<int>(std::atoi(str.c_str()));
		// toChar(i);

		std::cout << "It's a char." << std::endl;
		(void)i;
	}
	else if (isInt(str))
	{
		std::cout << "It's an int." << std::endl;
	}
	else if (isDouble(str))
	{
		std::cout << "It's a double." << std::endl;
	}
	else if (isFloat(str))
	{
		std::cout << "It's a float." << std::endl;
	}
	else
	{
		std::cout << "Unknown type." << std::endl;
	}

	return(0);
}