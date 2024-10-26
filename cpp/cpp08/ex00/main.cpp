#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"
#define RST "\033[0m"	// Reset to default color
#define BOLD "\033[1m"	// Bold
#define R "\033[1;31m"	// Red
#define G "\033[1;32m"	//Green

int main()
{
	std::vector<int> myVector;
	std::deque<int> myDeque;
	std::list<int> myList;

	for (int i = 0; i < 10; ++i)
	{
		myVector.push_back(i);
		myDeque.push_back(i);
		myList.push_back(i);
	}
	std::cout << R << "Testing with vector:\n" << RST;
	easyfind(myVector, 5);
	easyfind(myVector, 15);

	std::cout << R << "\nTesting with deque:\n" << RST;
	easyfind(myDeque, 7);
	easyfind(myDeque, 17);

	std::cout << R << "\nTesting with list:\n" << RST;
	easyfind(myList, 10);
	easyfind(myList, 0);

	std::cout << R << "\nTesting with list:\n" << RST;
	easyfind(myList, 9);
	easyfind(myList, -2);
	return (0);
}