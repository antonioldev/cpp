
#pragma once
#ifndef SCALAR_CONVERTER_DOT_HPP
#define SCALAR_CONVERTER_DOT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>

#define RST "\033[0m"    /* Reset to default color */
#define BOLD "\033[1m"   /* Bold */
#define R "\033[1;31m" /* Red */
class ScalarConverter
{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	virtual ScalarConverter& operator=(const ScalarConverter& other) = 0;
	static void convert(const std::string& str);
};

#endif
