#include <algorithm>

template <typename T>
void	easyfind(T container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);

	if (it != container.end())
		std::cout << "Found " << toFind << " at position " << std::distance(container.begin(), it) << std::endl;
	else
		std::cout << toFind << " not found in the container." << std::endl;
}