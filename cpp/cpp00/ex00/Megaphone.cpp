#include <iostream>
#include <string>

int	main (int ac, char **av)
{
	int	i;
	std::string str;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < ac)
		{
			str = av[i];
			for (std::string::iterator it = str.begin(); it != str.end(); it++)
				*it = std::toupper(*it);
			std::cout << str;
		}
			
		std::cout << std::endl;
	}
	return (0);
}