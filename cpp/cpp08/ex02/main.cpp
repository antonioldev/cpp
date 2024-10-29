#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
//std::cout << mstack.top() << std::endl;
//mstack.pop();
//std::cout << mstack.size() << std::endl;
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
std::stack<int> s(mstack);
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