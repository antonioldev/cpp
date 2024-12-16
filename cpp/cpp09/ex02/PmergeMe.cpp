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
	return timeVector;
}

double PmergeMe::getTimeDeque()
{
	return timeDeque;
}

int PmergeMe::getNbrElements()
{
	return nbr_elements;
}

std::vector<int>& PmergeMe::getVector()
{
	return vector;
}

std::deque<int>& PmergeMe::getDeque()
{
	return deque;
}
