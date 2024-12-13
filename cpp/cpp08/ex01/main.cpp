#include <iostream>
#include <cstdlib>
#include <vector>
//#include <deque>
#include <list>
//#include <stack>
#include "Span.hpp"

#define RST "\033[0m"	// Reset to default color
#define BOLD "\033[1m"	// Bold
#define R "\033[1;31m"	// Red
#define G "\033[1;32m"	//Green

int main()
{
	std::vector<int> moreNumbers;
	moreNumbers.push_back(6);
	moreNumbers.push_back(3);
	moreNumbers.push_back(17);
	moreNumbers.push_back(9);
	moreNumbers.push_back(11);

	std::list<int> moreNumbers2;
	moreNumbers2.push_back(6);
	moreNumbers2.push_back(3);
	moreNumbers2.push_back(17);
	moreNumbers2.push_back(9);
	moreNumbers2.push_back(11);

	std::cout << R << "**************************************\n";
	std::cout << "              EMPTY TEST              \n" << RST;
	Span sp0 = Span(5);
	std::cout << sp0.shortestSpan() << std::endl;
	sp0.addNumber(6);
	std::cout << "Longest distance is: " << sp0.longestSpan() << std::endl;
	// sp0.addNumber(3);
	// sp0.addNumber(17);
	// sp0.addNumber(9);
	// sp0.addNumber(11);
	std::cout << R << "**************************************\n\n" << RST;

	std::cout << G << "**************************************\n";
	std::cout << "              SMALL TEST              \n" << RST;
	Span sp = Span(5);
	sp.addNumber(6);
	// sp.addNumber(2147483647);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// sp.addNumber(-2147483648);
	std::cout << "Shortest distance is: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest distance is: " << sp.longestSpan() << std::endl;
	std::cout << G << "**************************************\n\n" << RST;

	std::cout << R << "**************************************\n";
	std::cout << "            OVERFLOW TEST             \n" << RST;
	Span sp2 = Span(4);
	sp2.addNumber(6);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);
	sp2.addNumber(11);
	std::cout << R << "**************************************\n\n" << RST;
	
	std::cout << G << "**************************************\n";
	std::cout << "              10000 TEST              \n" <<RST;
	Span sp3 = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp3.addNumber(rand());
	//sp3.printList();
	std::cout << "Shortest distance is: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest distance is: " << sp3.longestSpan() << std::endl;
	std::cout << G << "**************************************\n\n" << RST;

	std::cout << R << "**************************************\n";
	std::cout << "              20000  TEST              \n" << RST;
	Span sp4 = Span(20000);
	for (int i = 0; i < 10000; i++)
		sp4.addNumber(rand());
	//sp4.printList();
	std::cout << "Shortest distance is: " << sp4.shortestSpan() << std::endl;
	std::cout << "Longest distance is: " << sp4.longestSpan() << std::endl;
	std::cout << R << "**************************************\n\n" << RST;

	std::cout << G << "**************************************\n";
	std::cout << "            ONE CALL TEST             \n" << RST;
	Span sp5 = Span(5);
	sp5.addNumbers(moreNumbers);
	std::cout << "Shortest distance is: " << sp5.shortestSpan() << std::endl;
	std::cout << "Longest distance is: " << sp5.longestSpan() << std::endl;
	std::cout << G << "**************************************\n\n" << RST;

	std::cout << R << "**************************************\n";
	std::cout << "         ONE CALL TEST OVERFLOW        \n" << RST;
	Span sp6 = Span(4);
	sp6.addNumbers(moreNumbers2);
	std::cout << "Shortest distance is: " << sp6.shortestSpan() << std::endl;
	std::cout << "Longest distance is: " << sp6.longestSpan() << std::endl;
	std::cout << R << "**************************************\n\n" << RST;

	return 0;
}