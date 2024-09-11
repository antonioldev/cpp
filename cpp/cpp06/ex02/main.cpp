#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	srand(time(0));
	int i = rand();
	std::cout << i << std::endl;
	i %= 3;
	if (i == 0)
	{
		std::cout << "A has been created\n";
		return (new A);
	}
	else if (i == 1)
	{
		std::cout << "B has been created\n";
		return (new B);
	}
	else
	{
		std::cout << "C has been created\n";
		return (new C);	
	}
}

void identify(Base* ptr)
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "It's an A" << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << "It's an B" << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << "It's an C" << std::endl;
}

void identify(Base& ref)
{
	try
	{
		A &a = dynamic_cast<A&>(ref);
		(void)a;
		std::cout << "It's an A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B&>(ref);
		(void)b;
		std::cout << "It's an B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C&>(ref);
		(void)c;
		std::cout << "It's an C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main()
{
	Base* ptr = generate();
	Base &ref = *ptr;
	identify(ptr);
	identify(ref);
	delete (ptr);
	return (0);
}