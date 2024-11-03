#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char** av) : nbr_elements(ac - 1)
{
	for (int i = 1; i < ac; i++)
	{
		if (!containsOnlyDigits(av[i]))
			throw std::invalid_argument("The arguments can be only positive integers!");
		long nbr = std::atol(av[i]);
		if (nbr > INT_MAX)
			throw std::invalid_argument("The arguments can be only positive integers!");
	}
	
}

PmergeMe::PmergeMe(const PmergeMe& other) : nbr_elements(other.nbr_elements)
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		nbr_elements = other.nbr_elements;
	return *this;
}

PmergeMe::~PmergeMe(){}

bool PmergeMe::containsOnlyDigits(const char* str)
{
	if (str == NULL)
		return false;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

double PmergeMe::getTimeVector()
{
	return time_vector;
}

double PmergeMe::getTimeDeque()
{
	return time_deque;
}

int PmergeMe::getNbrElements()
{
	return nbr_elements;
}

std::vector<int> PmergeMe::getVector()
{
	return vector;
}

std::deque<int> PmergeMe::getDeque()
{
	return deque;
}

void PmergeMe::sortVector(int ac, char** av)
{
	clock_t start = clock();

	// Convert command line arguments to integers and push into vector
	for (int i = 1; i < ac; i++)
		vector.push_back(std::atoi(av[i]));
	std::vector<int> mainChain;
	std::vector<int> pend;
	createVectorPairs(mainChain, pend);
	mergeInsertionSortVector(mainChain, 0, mainChain.size() - 1, 5);
	//std::sort(mainChain.begin(), mainChain.end());
	insertToMainChainVector(mainChain, pend);
	vector = mainChain;

	clock_t end = clock();
	time_vector = double(end - start) / CLOCKS_PER_SEC * 1000000.00;
}

void PmergeMe::sortDeque(int ac, char** av)
{
	clock_t start = clock();
	for (int i = 1; i < ac; i++)
		deque.push_back(std::atoi(av[i]));
	std::deque<int> mainChain;
	std::deque<int> pend;
	createDequePairs(mainChain, pend);
	mergeInsertionSortDeque(mainChain, 0, mainChain.size() - 1, 5);
	std::sort(mainChain.begin(), mainChain.end());
	insertToMainChainDeque(mainChain, pend);
	deque = mainChain;
	clock_t end = clock();
	time_deque = double(end - start) / CLOCKS_PER_SEC * 1000000.00;
}