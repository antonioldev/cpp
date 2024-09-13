#include "iter.hpp"
#include "iostream"
#define C "\033[1;36m"
#define W "\033[1;37m"

int main( void )
{
	size_t l = 5;
	int arrInt[5] = {10, -20, 30, -40, 50};
	std::string arrStr[5] = {"Hello","my","name","is","Antonio..."};
	char arrChar[5] = {'a','b','c','d','e'};
	float arrFloat[5] = {1.1,2.2,3.3,4.4,5.5};
	std::cout << "~~~~~~~~~~~~~~~~~   " <<C "INT" W<< "  ~~~~~~~~~~~~~~~~~~~~~\n";	
	iter(arrInt, l, print<int>);
	std::cout << "\n" << std::endl;
	// iter(arrInt, l, isPositive<int>);
	// std::cout << std::endl;
	// iter(arrInt, l, addOne<int>);
	// iter(arrInt, l, print<int>);
	// std::cout << "\n" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~   " <<C "FLOAT" W<< " ~~~~~~~~~~~~~~~~~~~~\n";
	iter(arrFloat, l, print<float>);
	std::cout << "\n" << std::endl;
	// iter(arrFloat, l, isPositive<float>);
	// std::cout << std::endl;
	// iter(arrFloat, l, addOne<float>);
	// iter(arrFloat, l, print<float>);
	// std::cout << "\n" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~   " <<C "CHAR" W<< "  ~~~~~~~~~~~~~~~~~~~~\n";
	iter(arrChar, l, print<char>);
	std::cout << "\n" << std::endl;
	// iter(arrChar, l, addOne<char>);
	// iter(arrChar, l, print<char>);
	// std::cout << "\n" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~  " <<C "STRING" W<< " ~~~~~~~~~~~~~~~~~~~~\n";
	iter(arrStr, l, print<std::string>);
	std::cout << "\n" << std::endl;
	return 0;
}