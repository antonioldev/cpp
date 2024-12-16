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
			container.sortContainer(ac, av, container.getVector());

			// Order the deque and calculate time
			container.sortContainer(ac, av, container.getDeque());

			//Print ordered container
			std::cout << "After sorting: ";
			container.printContainer(container.getVector());
			// container.printContainer(container.getDeque());

			//Print time for csorting
			std::cout << "Time to process a range of " << container.getNbrElements() << \
				" elements with std::vector : " << std::fixed << std::setprecision(4) << \
				container.getTimeVector() << " milliseconds\n";
			std::cout << "Time to process a range of " << container.getNbrElements() << \
				" elements with std::deque : " << std::fixed << std::setprecision(4) << \
				container.getTimeDeque() << " milliseconds\n";
		}
		catch (const std::invalid_argument& e)
		{
			std::cerr << "Invalid argument: " << e.what() << std::endl;
		}
		
	}
	return 0;
}