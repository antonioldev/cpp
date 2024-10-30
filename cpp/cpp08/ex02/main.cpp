#include "MutantStack.hpp"
#include <list>
#include <iostream>

int main()
{
	std::cout << R << "**************************************\n";
	std::cout << "           ITERATE LIST TEST          \n" << RST;
	std::list<int> lst;
	if (lst.empty())
		std::cout << "List is empty test! \n";
	lst.push_back(5);
	lst.push_back(17);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator itList = lst.begin();
	std::list<int>::iterator iteList = lst.end();
	while (itList != iteList) {
		std::cout << *itList << std::endl;
		++itList;
	}
	std::cout << R << "**************************************\n\n" << RST;

	std::cout << G << "**************************************\n";
	std::cout << "         ITERATE MY STACK TEST        \n" << RST;
	
	MutantStack<int> mstack;
	if (mstack.empty())
		std::cout << "Stack is empty test! \n";
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << G << "**************************************\n\n" << RST;

	std::cout << R << "**************************************\n";
	std::cout << "       FUNCTIONALITY STACK TEST       \n" << RST;
	std::stack<int> s(mstack);
	std::cout << "Stack size: " << s.size() << std::endl;
	std::cout << "Stack top: " << s.top() << std::endl;
	s.pop();
	std::cout << "Called pop() on the stack...\n";
	std::cout << "Stack size: " << s.size() << std::endl;
	std::cout << "Stack top: " << s.top() << std::endl;
	std::cout << R << "**************************************\n\n" << RST;

	return 0;
}

/*
A stack stores multiple elements in a specific order, called LIFO.
LIFO stands for Last in, First Out.

(constructor)	: constructs the stack
(destructor)	: destructs the stack
operator=		: assigns values to the container adaptor

top				: accesses the top element
empty			: checks whether the container adaptor is empty
size			: returns the number of elements

push			: inserts element at the top
pop				: removes the top element
*/