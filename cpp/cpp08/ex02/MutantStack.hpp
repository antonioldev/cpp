#ifndef MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <stack>

#define RST "\033[0m"	// Reset to default color
#define BOLD "\033[1m"	// Bold
#define R "\033[1;31m"	// Red
#define G "\033[1;32m"	//Green

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