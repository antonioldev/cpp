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

std::string Span::shortestSpan()
{
	try
	{
		if (currentElements == 0)
			throw std::invalid_argument("List is empty!");
		if (currentElements == 1)
			throw std::invalid_argument("List has only 1 item");

		int shortest = INT_MAX;
		
		std::list<int>::iterator it1 = myList.begin();
		std::list<int>::const_iterator it2 = ++myList.begin();

		while (it2 != myList.end())
		{
			int difference = std::abs(*it1 - *it2);
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

std::string Span::longestSpan()
{
	try
	{
		if (currentElements == 0)
			throw std::invalid_argument("List is empty!");
		if (currentElements == 1)
			throw std::invalid_argument("List has only 1 item");
		int longest = 0;

		std::list<int>::iterator it1 = myList.begin();
		std::list<int>::iterator it2 = ++myList.begin();

		while (it2 != myList.end())
		{
			int difference = std::abs(*it1 - *it2);
			if (difference > longest)
				longest = difference;
			++it1;
			++it2;
		}
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

void Span::printList()
{
	std::cout << "Elements: ";
	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";
	
}

//template <typename T>
//void Span::addNumbers(T container)
//{
//	typename T::iterator it;
//	for (it = container.begin(); it != container.end(); ++it)
//		addNumber(*it);
//}