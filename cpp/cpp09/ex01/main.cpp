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

// ./RPN "3 4 +" -> 7
// ./RPN "8 3 -" -> 5
// ./RPN "6 2 *" -> 12
// ./RPN "12 4 /" -> 3
// ./RPN "5 1 2 + *" -> 15
// ./RPN "9 3 1 + /" -> 3
// ./RPN "7 2 3 * -" -> 1
// ./RPN "10 2 / 3 +" -> 8
// ./RPN "4 5 + 3 *" -> 27
// ./RPN "8 2 / 3 - 6 *" -> 6
// ./RPN "15 7 1 1 + - / 3 *" -> 9
// ./RPN "5 1 2 + 4 * + 3 -" -> 14
// ./RPN "10 2 8 * + 3 -" -> 23
// ./RPN "20 5 / 3 4 + * 2 -" -> 26
// ./RPN "7 2 3 * - 4 5 + *" -> 9
// ./RPN "6 2 4 * + 3 / 5 1 - *" -> 16
// ./RPN "8 3 + 2 * 4 / 5 +" -> 10
// ./RPN "12 4 / 3 2 + * 7 -" -> 8
// ./RPN "9 6 3 / - 5 * 2 +" -> 37
// ./RPN "10 5 * 2 / 3 7 + -" -> 15


