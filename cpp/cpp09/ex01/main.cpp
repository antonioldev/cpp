#include "RPN.hpp"

int main(int ac, char** av)
{
	if (ac == 1)
		std::cerr << "Missing argument, please insert an inverted Polish mathematical expression as an argument\n";
	else if (ac > 2)
		std::cerr << "Too many arguments\n";
	else
	{
		try
		{
			RPN calculator(av[1]);
			calculator.calculate(av[1]);
		}
		catch (const std::runtime_error& e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	return (0);
}