#include "Span.hpp"

template <typename T>
	void	addNumbers(T container)
	{
		typename T::iterator it;
		for (it = container.begin(); it != container.end(); ++it)
			addNumber(*it);
	}
