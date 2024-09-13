#include "utils.hpp"

bool isChar(const std::string& str)
{
	if (str.length() == 1 && std::isprint(str[0]))
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

void printResult(int c, long i, float f, double d)
{
	if (isprint(c))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (i == std::numeric_limits<float>::infinity()
		|| i == -std::numeric_limits<float>::infinity()
		|| std::isnan(i))
			std::cout << "int: impossible" << std::endl;
	else if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;

	std::cout << "float: " << std::fixed << f << "f\n";

	std::cout << "double: " << std::fixed << d << std::endl;
}