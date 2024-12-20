#pragma once

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cstdlib>

class RPN
{
public:
	RPN(char* str);
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();

	void calculate(char* str);

private:
	std::stack<int> stack;
	int performOperation(int a, int b, const std::string& op);
	bool isOperator(const std::string& token);
};
