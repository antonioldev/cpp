#include "RPN.hpp"

RPN::RPN(char* str)
{
	for (char* ptr = str; *ptr != '\0'; ++ptr)
	{
		if (!(std::isdigit(*ptr) || (*ptr == '+' || *ptr == '-' || *ptr == '*' || *ptr == '/') || std::isspace(*ptr)))
			throw std::runtime_error("Error: Invalid character detected");
	}
}

RPN::RPN(const RPN& other) : stack(other.stack)
{
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		stack = other.stack;
	return *this;
}

RPN::~RPN(){}

void RPN::calculate(char* str)
{
	std::istringstream iss(str);
	std::string token;
	bool is_previous_operator = false;

	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (is_previous_operator)
				throw std::runtime_error("Error: Two consecutive operetors found found.");
			if (stack.size() < 2)
				throw std::runtime_error("Error: Only one operand found.");
			while (stack.size() > 1)
			{
				int b = stack.back();
				stack.pop_back();
				int a = stack.back();
				stack.pop_back();
				int result = performOperation(a, b, token);
				stack.push_back(result);
			}
			is_previous_operator = true;
		}
		else
		{
			stack.push_back(atoi(token.c_str()));
			is_previous_operator = false;
		}
	}
	if (stack.size() != 1) {
		throw std::runtime_error("Error: The expression did not evaluate to a single result.");
	}
	std::cout << "Result: " << stack.back() << std::endl;
}

bool isOperator(const std::string& token)
{
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int performOperation(int a, int b, const std::string& op)
{
	if (op == "+")
		return (a + b);
	if (op == "-")
		return (a - b);
	if (op == "*")
		return (a * b);
	if (op == "/")
		return (a / b);
	return 0;
}