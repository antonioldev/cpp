#include "Span.hpp"

Span::Span(unsigned int size) : maxElements(size), currentElements(0)
{}

Span::~Span()
{}

Span::Span(const Span& other)
	: maxElements(other.maxElements),
	currentElements(other.currentElements),
	myList(other.myList)
{}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		maxElements = other.maxElements;
		currentElements = other.currentElements;
		myList = other.myList;
	}
	return *this;
}

void Span::addNumber(int number)
{
	try
	{
		if (currentElements < maxElements)
		{
			currentElements++;
			myList.push_back(number);
		}
		else {
			throw std::invalid_argument("List is full! Can't add more items");
		}
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Exception caught in addNumber(): " << e.what() << std::endl;
	}
}

void Span::printList()
{
	std::cout << "Elements: ";
	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
	
}

std::string Span::longestSpan()
{
	try
	{
		if (currentElements == 0)
			throw std::invalid_argument("List is empty!");
		if (currentElements == 1)
			throw std::invalid_argument("List has only 1 item");
		long longest = 0;

		std::list<int>::iterator minIt = std::min_element(myList.begin(), myList.end());
		std::list<int>::iterator maxIt = std::max_element(myList.begin(), myList.end());
		longest = ((long)(*maxIt) - (long)(*minIt));
		if (longest < 0)
			longest *= -1;
		std::stringstream ss;
		ss << longest;
		return ss.str();
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Exception caught in longestSpan(): " << e.what();
	}
	return "";
}

std::string Span::shortestSpan()
{
	try
	{
		if (currentElements == 0)
			throw std::invalid_argument("List is empty!");
		if (currentElements == 1)
			throw std::invalid_argument("List has only 1 item");

		long shortest = LONG_MAX;
		
		std::list<int> tempList = myList;
		tempList.sort();

		std::list<int>::iterator it1 = tempList.begin();
		std::list<int>::iterator it2 = ++tempList.begin();
		while (it2 != tempList.end())
		{
			long difference = ((long)(*it1) - (long)(*it2));
			if (difference < 0)
				difference *= -1;
			if (difference < shortest)
				shortest = difference;
			++it1;
			++it2;
		}
		std::stringstream ss;
		ss << shortest;
		return ss.str();
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Exception caught in shortestSpan(): " << e.what();
	}
	return "";
}