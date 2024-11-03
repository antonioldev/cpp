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
	
	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (stack.size() < 2)
				throw std::runtime_error("Error: Only one operand found.");
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			int result = performOperation(a, b, token);
			stack.push(result);
		}
		else
		{
			stack.push(atoi(token.c_str()));
		}
	}
	if (stack.size() != 1) {
		throw std::runtime_error("Error: The expression did not evaluate to a single result.");
	}
	std::cout << "Result: " << stack.top() << std::endl;
}

bool RPN::isOperator(const std::string& token)
{
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::performOperation(int a, int b, const std::string& op)
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