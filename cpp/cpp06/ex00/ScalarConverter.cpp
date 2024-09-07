#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	if (this == &other)
		return (*this);
	return (*this);
}


void ScalarConverter::convert(const std::string& str)
{
	std::cout << BOLD R "Parameter: " << str << RST << std::endl;
	
	int i = static_cast<int>(std::atoi(str.c_str()));
	if (isprint(i))
		std::cout << "int: " << static_cast<char>(i) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	
	try
	{
		float i = static_cast<float>(std::atof(str.c_str()));
		if (i == std::numeric_limits<float>::infinity()
			|| i == -std::numeric_limits<float>::infinity()
			|| std::isnan(i))
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(i) << std::endl;
	}
	catch (std::invalid_argument&)
	{
		std::cout << "int: impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "int: out of range" << std::endl;
	}
	try
	{
		float f = static_cast<float>(std::atof(str.c_str()));
		std::cout << "float: " << std::fixed << f << "f";
		std::cout << std::endl;
	}
	catch (std::invalid_argument&)
	{
		std::cout << "float: impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "float: out of range" << std::endl;
	}	
	try
	{
		double d = static_cast<double>(std::atof(str.c_str()));
		std::cout << "double: " << d;
		std::cout << std::endl;
	}
	catch (std::invalid_argument&)
	{
		std::cout << "double: impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "double: out of range" << std::endl;
	}
}
