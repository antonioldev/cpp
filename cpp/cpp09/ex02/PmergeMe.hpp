#pragma once

#include <vector>
#include <deque>
#include <cstdlib>
#include <iostream>
#include <climits>
#include <ctime>
#include <algorithm>
#include <iomanip>

class PmergeMe
{
public:
	PmergeMe(int ac, char** av);
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();
	void sortVector(int ac, char** av);
	void sortDeque(int ac, char** av);
	double getTimeVector();
	double getTimeDeque();
	int getNbrElements();
	std::vector<int> getVector();
	std::deque<int> getDeque();

	template <typename Container>
	void printContainer(const Container& container)
	{
		for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	}

private:
	bool containsOnlyDigits(const char* str);

	void insertToMainChainVector(std::vector<int>& mainChain, std::vector<int>& pend);
	void createVectorPairs(std::vector<int>& mainChain, std::vector<int>& pend);
	void mergeInsertionSortVector(std::vector<int>& arr, int left, int right, int threshold);
	
	void insertToMainChainDeque(std::deque<int>& mainChain, std::deque<int>& pend);
	void createDequePairs(std::deque<int>& mainChain, std::deque<int>& pend);
	void mergeInsertionSortDeque(std::deque<int>& arr, int left, int right, int threshold);
	int nbr_elements;
	std::vector<int> vector;
	double time_vector;
	std::deque<int> deque;
	double time_deque;
};

