#include "PmergeMe.hpp"

void printArguments(int ac, char** av)
{
	std::cout << "Before sorting: ";
	for (int i = 1; i < ac; i++)
	{
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
}

int main(int ac, char** av)
{
	if (ac < 2)
		std::cerr << "Error: No arguments passed\n";
	else
	{
		try
		{
			PmergeMe container(ac, av);
			//Print unordered container
			printArguments(ac, av);
			
			//Order the vector and claculate time
			container.sortVector(ac, av);

			//Order the deque and calculate time
			container.sortDeque(ac, av);

			//Print ordered container
			std::cout << "After sorting: ";
			container.printContainer(container.getVector());

			//Print time for csorting
			std::cout << "Time to process a range of " << container.getNbrElements() << " elements with std::vector : " << std::fixed << std::setprecision(2) << container.getTimeVector() << " us\n";
			std::cout << "Time to process a range of " << container.getNbrElements() << " elements with std::deque : " << std::fixed << std::setprecision(2) << container.getTimeDeque() << " us\n";
		}
		catch (const std::invalid_argument& e)
		{
			std::cerr << "Invalid argument: " << e.what() << std::endl;
		}
		
	}
	return 0;
}