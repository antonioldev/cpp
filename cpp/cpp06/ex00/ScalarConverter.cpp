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
	if (isChar(str))
	{
		std::cout << BOLD R << str << " is a char\n" RST;
		int c = static_cast<int>(std::atoi(str.c_str()));
		long i = static_cast<long>(c);
		float f = static_cast<float>(c);
		double d = static_cast<double>(c);
		printResult(c, i, f, d);
		
	}
	else if (isInt(str))
	{
		std::cout << BOLD R << str << " is an int\n" RST;
		float i = static_cast<float>(std::atof(str.c_str()));
		char c = static_cast<char>(i);
		float f = static_cast<float>(i);
		double d = static_cast<double>(i);
		printResult(c, i, f, d);

	}
	else if (isDouble(str))
	{
		std::cout << BOLD R << str << " is a double\n" RST;
		double d = static_cast<double>(std::atof(str.c_str()));
		char c = static_cast<char>(d);
		float i = static_cast<float>(std::atof(str.c_str()));
		float f = static_cast<float>(d);
		printResult(c, i, f, d);
	}
	else if (isFloat(str))
	{
		std::cout << BOLD R << str << " is a float\n" RST;
		float f = static_cast<float>(std::atof(str.c_str()));
		char c = static_cast<char>(f);
		float i = static_cast<float>(std::atof(str.c_str()));
		double d = static_cast<double>(f);
		printResult(c, i, f, d);
	}
	else
	{
		std::cout <<BOLD R << str << " is unknown type." RST<< std::endl;
	}

}