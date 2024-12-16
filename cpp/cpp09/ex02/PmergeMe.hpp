#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <climits>
#include <sys/time.h>
#include <algorithm>
#include <iomanip>
#include <typeinfo>

class PmergeMe
{
public:
	PmergeMe(int ac, char** av);
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();
	double getTimeVector();
	double getTimeDeque();
	int getNbrElements();
	std::vector<int>& getVector();
	std::deque<int>& getDeque();

	template <typename Container>
	void printContainer(const Container& container) const;

	template <typename Container>
	void sortContainer(int ac, char** av, Container& container);

private:
	int nbr_elements;
	std::vector<int> vector;
	double timeVector;
	std::deque<int> deque;
	double timeDeque;
	bool containsOnlyDigits(const char* str);
	
	template <typename Container>
	int binarySearch(Container& arr, int valueToMove);
	
	template <typename Container> // 1-> Create pairs and separate into mainChain and pend
	void createPairs(Container& mainChain, Container& pend,  Container& source);

	template <typename Container> // 2->  Sort using merge insertion based on mainChain
	void sortMainChain(Container& mainChain, Container& pend);
	
	template <typename Container> // 3-> Insert the rest of pend int mainChain
	void mergePendingElements(Container& mainChain, Container& pend);
};

#include "PmergeMe.tpp"

#endif