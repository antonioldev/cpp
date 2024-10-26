#include "Span.hpp"

Span::Span(unsigned int size) : maxElements(size), currentElements(0)
{}

Span::~Span()
{}

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
		unsigned int shortest = UINT32_MAX;
		for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
		{
			std::list<int>::iterator it2 = std::next(it);
			int difference = std::abs(*it - *it2);
			if (difference < shortest)
				shortest = difference;
		}
		return std::to_string(shortest);
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
		unsigned int longest = 0;
		for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
		{
			std::list<int>::iterator it2 = std::next(it);
			int difference = std::abs(*it - *it2);
			if (difference > longest)
				longest = difference;
		}
		return std::to_string(longest);
	}
	catch (const std::invalid_argument& e)
	{
		std::cerr << "Exception caught in longestSpan(): " << e.what();
	}
	return "";
}

void Span::printList()
{
	std::cout << "Elements: " ;
	for (const int& elem : myList)
		std::cout << elem << " ";
	std::cout << "\n";
}

//template <typename T>
//void Span::addNumbers(T container)
//{
//	typename T::iterator it;
//	for (it = container.begin(); it != container.end(); ++it)
//		addNumber(*it);
//}