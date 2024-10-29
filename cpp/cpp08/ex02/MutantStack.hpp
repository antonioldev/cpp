#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const &other);
	MutantStack &operator=(MutantStack const &other);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	//typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin();
	iterator end();

	//reverse_iterator rbegin();
	//reverse_iterator rend();
};

#include "MutantStack.tpp"

#endif