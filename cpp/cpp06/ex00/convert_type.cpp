#include "ScalarConverter.hpp"

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

void toDouble(void type)
{
	double f = static_cast<double>(type);
	std::cout << "double: " << std::fixed << f << "f";
		std::cout << std::endl;
}

void toChar(void type)
{
	int i = static_cast<int>(std::atoi(str.c_str()));
	if (isprint(i))
		std::cout << "int: " << static_cast<char>(i) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}