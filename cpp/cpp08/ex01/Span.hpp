#pragma once
#include <list>
#include <iostream>
#include <string>
#include <cstdarg>

#define RST "\033[0m"	// Reset to default color
#define BOLD "\033[1m"	// Bold
#define R "\033[1;31m"	// Red
#define G "\033[1;32m"	//Green

class Span {
private:
	int	maxElements;
	int	currentElements;
	std::list<int> myList;

public:
	Span(unsigned int size);
	~Span();
	void		addNumber(int number);
	std::string	shortestSpan();
	std::string	longestSpan();
	void printList();

	template <typename T>
	void	addNumbers(T container)
	{
		typename T::iterator it;
		for (it = container.begin(); it != container.end(); ++it)
			addNumber(*it);
	}
};
